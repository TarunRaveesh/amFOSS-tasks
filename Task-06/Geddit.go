package main

import (
	"context"
	"fmt"
	"log"

	"github.com/vartanbeno/go-reddit/v2/reddit"
)

var ctx = context.Background()

func main() {
	if err := run(); err != nil {
		log.Fatal(err)
	}
}

func run() (err error) {

	credentials := reddit.Credentials{ID: "RbD7oJqxZA31UA", Secret: "OCLUQF_2nBXbVGXFi3dwi1D9GJs4AA", Username: "Trance_x07", Password: "tarun5570"}
	client, _ := reddit.NewClient(credentials)

	sr, _, err := reddit.DefaultClient().Subreddit.Get(ctx, "memes")
	if err != nil {
		return
	}
	fmt.Printf("\nThe subreddit %s has been fetched for the task.\n", sr.NamePrefixed)
	fmt.Printf("\nGiven below are the top 100 posts which got upvoted:\n")

	posts, _, err := client.Subreddit.TopPosts(context.Background(), "memes", &reddit.ListPostOptions{
		ListOptions: reddit.ListOptions{
			Limit: 100,
		},
		Time: "week",
	})
	for _, post := range posts {
		fmt.Println(post.Title)
		_, err := client.Post.Upvote(context.Background(), "t3_"+post.ID)
		if err != nil {
			return err
		}
	}
	if err == nil {
		fmt.Printf("\nUpvotes Successful.\n\n")
	}
	return
}
