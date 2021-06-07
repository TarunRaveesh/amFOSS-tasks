## Task 08 - Sir Perceval’s quest
This one was easy too. Just going through the documentation was enough to know how to use python to access the Github API.

I faced a small issue, as normally the API returns only 30 results, hence I used ```?page=1&per_page=1000``` to set a limit of 1000 pages/repos, as this is how the API fetches the Github Repos, in the form of individual pages. We can easily change the limit from 1000 to any desired number of repositories.

Further, to fetch the commits for individual repos I got to know this fact that the data fetched by the API was in the form of a dictonary and the name attribute contained the individual repository names. Hence looping the name attribute as a list data type did the work.

I used the OS Package to run the system commands in the Linux Terminal and the Requests pakage to access the Github API.
