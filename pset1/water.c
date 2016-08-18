/***  Code by: Reza Jafar
**Assignment:** Suffice it to say that the longer you shower, the more water you use. But just how much? 
Even if you have a "low-flow" showerhead, odds are your shower spits out 1.5 gallons of water 
per minute. A gallon, meanwhile, is 128 ounces, and so that shower spits out 1.5 × 128 = 192 
ounces of water per minute. A typical bottle of water (that you might have for a drink, not a shower), meanwhile, 
might be 16 ounces. So taking a 1-minute shower is akin to using 192 ÷ 16 = 12 bottles of water. 
Taking (more realistically, perhaps!) a 10-minute shower, then, is like using 120 bottles of water.
Deer Park, that’s a lot of water! Of course, bottled water itself is wasteful; best to use reusable containers
when you can! But it does put into perspective what’s being spent in a shower! 
Write, in a file called water.c in your ~/workspace/pset1 directory, a program that prompts the user for the 
length of his or her shower in minutes (as a positive integer) and then prints the equivalent number of bottles 
of water (as an integer) per the sample output below, wherein underlined text represents some user’s input.
username:~/workspace/pset1 $ ./water
minutes: 10
bottles: 120
For simplicity, you may assume that the user will input a positive integer, so no need for error-checking (or any loops)
this time! And no need to worry about overflow!
***/

#include <stdio.h>
#include <cs50.h>

int main (void) {
    
    //Prompt user for shower length in minutes and store in var
    printf("How many minutes do you shower: \n");
    int showerMin = GetInt();
    
    //Calculate how many bottles used during shower
    int bottles = 192 / 16 * showerMin;
    
    //Prints minutes in the shower and how many bottles of water that amounts to
    printf("Minutes: %i\n", showerMin);
    printf("Bottles: %i\n", bottles);
}
