use reqwest;
use scraper::{Selector, Html};
use csv::Writer;

#[tokio::main]
async fn main() -> Result<(), Box<dyn std::error::Error>> {
    let resp = reqwest::get("https://www.worldometers.info/coronavirus/#countries").await?;
    assert!(resp.status().is_success());
    let body = resp.text().await?;
    let fragment = Html::parse_document(&body);
    let countries = Selector::parse("#main_table_countries_today tbody:nth-child(2) tr:not([style*=\"display: none\"])").unwrap();
    let mut count = 1;
    let mut csv = Writer::from_path("Covid19 Details.csv")?;

    for country in fragment.select(&countries) {
        let mut countrydata = country.text().collect::<Vec<_>>();
        if count == 1 {count += 1; continue;}
        countrydata.retain(|ele| *ele != "\n");
        countrydata.retain(|ele| *ele != "\n ");
        countrydata.retain(|ele| !ele.starts_with("+"));
        println!("{:?} {:?} {:?} {:?}",countrydata[1],countrydata[2],countrydata[3],countrydata[4]);
        csv.write_record(&[countrydata[0], countrydata[1], countrydata[2], countrydata[3], countrydata[4]])?;
        if count > 10 { break; }
        else {count += 1;}
    }
    csv.flush()?;
    Ok(())
}