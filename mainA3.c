#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
#include "headerA3.h"

int main(int argc, char * argv[]) {

int option = 0;
tweet * tweetList = NULL;

printf("1. Create a new tweet\n2. Display tweets\n3. Search a tweet (by keyword)\n4. Find how many words are \"stop words\"\n5. Delete the nth tweet\n6. Save tweets to a file\n7. Load tweets from a file\n8. Exit");  // print menu options

printf("\nChoose a menu option: ");             // prompt user to choose menu option
scanf("%d", &option);                               // scan and store user option choice into option

    while( (option >= 1) && (option < 8) )
    {
        if(option == 1)                     // create a tweet if option is 1 
        {
            tweetList = createTweet(tweetList);
            printf("1. Create a new tweet\n2. Display tweets\n3. Search a tweet (by keyword)\n4. Find how many words are \"stop words\"\n5. Delete the nth tweet\n6. Save tweets to a file\n7. Load tweets from a file\n8. Exit");
            printf("\nChoose a menu option: ");
            scanf("%d", &option);
        }

        if(option == 2)                     // display tweets if option is 2
        {
            displayTweets(tweetList);
            printf("1. Create a new tweet\n2. Display tweets\n3. Search a tweet (by keyword)\n4. Find how many words are \"stop words\"\n5. Delete the nth tweet\n6. Save tweets to a file\n7. Load tweets from a file\n8. Exit");
            printf("\nChoose a menu option: ");
            scanf("%d", &option);
        }
        
        if(option == 5)                     // deletes tweets if option is 5
        {
            deleteTweet(&tweetList);
            printf("1. Create a new tweet\n2. Display tweets\n3. Search a tweet (by keyword)\n4. Find how many words are \"stop words\"\n5. Delete the nth tweet\n6. Save tweets to a file\n7. Load tweets from a file\n8. Exit");
            printf("\nChoose a menu option: ");
            scanf("%d", &option);
        }
    }

    if(option==8)                           // exit out of program if option selected is equal to 8
    {
    void exit(int status);
    }  

}