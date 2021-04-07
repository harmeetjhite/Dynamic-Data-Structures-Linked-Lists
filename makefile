a3: createTweet.o displayTweets.o addNodeToList.o loadTweetsFromFile.o saveTweetsToFile.o deleteTweet.c countStopWords.c searchTweetsByKeyword.c mainA3.c
	gcc -Wall -std=c99 createTweet.o displayTweets.o addNodeToList.o loadTweetsFromFile.o saveTweetsToFile.o deleteTweet.c countStopWords.c searchTweetsByKeyword.c mainA3.c -o a3
createTweet.o: createTweet.c
	gcc -Wall -std=c99 -c createTweet.c
displayTweets.o: displayTweets.c
	gcc -Wall -std=c99 -c displayTweets.c
addNodeToList.o: addNodeToList.c
	gcc -Wall -std=c99 -c addNodeToList.c
loadTweetsFromFile.o: loadTweetsFromFile.c
	gcc -Wall -std=c99 -c loadTweetsFromFile.c
saveTweetsToFile.o: saveTweetsToFile.c
	gcc -Wall -std=c99 -c saveTweetsToFile.c
deleteTweet.o: deleteTweet.c
	gcc -Wall -std=c99 -c deleteTweet.c
countStopWords.o: countStopWords.c
	gcc -Wall -std=c99 -c countStopWords.c
searchTweetsByKeyword.o: searchTweetsByKeyword.c
	gcc -Wall -std=c99 -c searchTweetsByKeyword.c
clean:
	rm *.o a3