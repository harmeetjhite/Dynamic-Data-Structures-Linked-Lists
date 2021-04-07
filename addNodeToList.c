#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
#include "headerA3.h"

void addNodeToList(tweet ** tweetList, tweet * node)
{

tweet *head = *tweetList;               // create head with respect to struct tweet 

if(*tweetList == NULL)
{
    //printf("\ntweetlist is null\n");
    *tweetList = node;                          // if tweetlist is empty, make the head point to node
}

else
{
    //printf("\ntweetlist is NOT null\n");
    
    while(head->next != NULL)                       // until no more tweets are entered, do the following
    {
        head = head->next;                  // assign head to the next tweet
    }
    head->next = node;                  // assign the next head to the current node
}

}