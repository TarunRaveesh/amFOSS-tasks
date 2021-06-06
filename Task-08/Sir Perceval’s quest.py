import requests
import os

USERNAME = "amfoss"

req = requests.get("https://api.github.com/users/" + USERNAME + "/repos?page=1&per_page=1000") # Using ?page=1&per_page=n we can fetch upto n repos.
repos = req.json()

print("\nThe no. of repos fetched from the given organisation = ", len(repos))

for i in range(len(repos)):
    os.system("perceval git --json-line https://github.com/" + USERNAME + "/" + repos[i]["name"] + ">> Commits.json")