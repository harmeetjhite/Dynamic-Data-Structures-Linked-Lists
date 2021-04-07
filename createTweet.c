#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
#include "headerA3.h"

tweet * createTweet( tweet * tweetList)
{
tweet *newtweet = (tweet* )malloc(sizeof(tweet));            // malloc the tweet called newtweet
int sum = 0;
char username[51];                  // allocate 51 bytes for char username
newtweet->next = NULL;

printf("Enter a username: ");                   // prompt user to enter username
scanf("%s", username);

printf("Enter the user’s tweet: ");                 // prompt user to enter tweet
getchar();
fgets(newtweet->text, 141, stdin);                  // store tweet into newtweet

    int len = strlen(username);                 // store length of username into len
    for (int i = 0; i < len; i++)
    {  
        sum = sum + username[i];                // sum ascii letters of username chars 
    }

    sum = sum + strlen(newtweet->text) - 1;

    newtweet->id = sum;
    printf("Your computer-generated userid is %d.\n", sum);             // show userid

addNodeToList(&tweetList, newtweet);                // pass tweetlist and newtweet into addNodetoList function
free(newtweet);
return tweetList;
    
}