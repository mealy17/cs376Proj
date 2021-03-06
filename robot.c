/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
 * @author Tanya L. Crenshaw and Logan P. Mealy
 * @author Tanya L. Crenshaw and Jin Mok
 * @since August 2013
 *
 */

#include "robot.h"

/**
 * robPrintMessage
 *
 * This function prints the message, "I really* love robots!"
 *
 * @param num the number of times the message should print the word
 * "really"
 *
 * @returns none 
 */
void robPrintMessage(int num)
{
  int i = 0;


  printf("Jin and Logan ");



  for(i; i < num; i++)
    {
      printf("really ");
    }

  printf("loves robots!\n");

  return;
}

int i=0;

/**
 * robPrintAscii
 *
 */
void robPrintAscii(void)
{

  char * spaces[3] = {"", "       ", "            "};

  for (i=0; i<3; i++)
    {  
      printf("%s    i_i    \n"
              "%s   [o_o]   \n"	 
		"%s   [0_0]   \n"
	     "%s  /|___|\\  \n"
	     "%s   d   b   ",spaces[i],spaces[i],spaces[i],spaces[i],spaces[i]); 
      printf("\n");
 }
}
