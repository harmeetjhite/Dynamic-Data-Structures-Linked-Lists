#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
#include "headerA3.h"

void deleteTweet(tweet ** tweetList)
{
int count = 0;
int i = 0;
int num = 0;

tweet *ptr = *tweetList;
tweet *current = *tweetList;
tweet *previous = *tweetList;

while(ptr != NULL)                                  // count number of nodes in linked list
{
    count++;
    ptr = ptr->next;
}

printf("Currently there are %d tweets.\n", count);
printf("Which tweet do you wish to delete - enter a value between 1 and %d: ", count);
scanf("%d ", &num);

if (*tweetList == NULL)                                  // if list is empty, print 
{
    printf("list is empty");
}

else if (num == 1)                                      // if list only contains one tweet, delete the head
{
    *tweetList = current->next;
    free(current);
    current = NULL;
}

else
{
    for(i =1; i< num; i++)                                     // if list contains >1 tweets, do the following
    {
        previous = current;
        current = current->next;
    }
    previous->next = current->next;
    free(current);
    current = NULL;
}

printf("Tweet %d deleted. There are now %d tweets left.", num, count-1);

}