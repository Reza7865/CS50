/*** Code By: Reza Jafar
Assignment: Write, in a file called mario.c in your ~/workspace/pset1 directory, a program that recreates this half-pyramid 
using hashes (#) for blocks. However, to make things more interesting, first prompt the user for the half-pyramid’s
height, a non-negative integer no greater than 23. (The height of the half-pyramid pictured above happens to be 8.) 
If the user fails to provide a non-negative integer no greater than 23, you should re-prompt for the same again. 
Then, generate (with the help of printf and one or more loops) the desired half-pyramid. Take care to align the bottom-left
corner of your half-pyramid with the left-hand edge of your terminal window, as in the sample output below, wherein underlined
text represents some user’s input.
username:~/workspace/pset1 $ ./mario
height: 8
       ##
      ###
     ####
    #####
   ######
  #######
 ########
#########
Note that the rightmost two columns of blocks must be of the same height. No need to generate the pipe, clouds, numbers,
text, or Mario himself.
By contrast, if the user fails to provide a non-negative integer no greater than 23, your program’s output should instead
resemble the below, wherein underlined text again represents some user’s input. (Recall that GetInt will handle some, 
but not all, re-prompting for you.)
***/


#include <stdio.h>
#include <cs50.h>

int main (void) {
    
    //Prompt user for pyramid height
    int height;
    do {
        printf("Please enter pyramid height: ");
        height = GetInt();
    } 
    while (height < 1 || height > 23);
    
    //Print pyramid
    for(int i=0; i < height; i++){
        for (int spaces = 0; spaces < height - i - 1; spaces++){
            printf(".");
        }
        for (int hashes = 0; hashes < i + 2; hashes++){
            printf("#");
        }
        printf("\n");
    }
    
}
