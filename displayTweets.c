#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
#include "headerA3.h"

void displayTweets(tweet *tweetList)
{
    tweet *ptr = tweetList;                     // create a pointer to traverse with respect to struct ptr

    while(ptr != NULL)                              // traverse till ptr is NULL
    {
        printf("%s", ptr->text);                // print the current node
        ptr = ptr->next;                        // point to the next node
    }

}