/**
 * main.c
 * 
 * The main entrypoint of the "I really love robots" program.  The
 * program prints the phrase "I really love robots!" to the screen.
 *
 * @author Tanya L. Crenshaw
 * @since August 2013
 *
 */
#include "robot.h"

#include "mealy17.h"
#include "mok17.h"

/**
 * main()
 *
 * The main entrypoint of the program.
 * 
 * @param command line arguments.
 * 
 * @returns nothing.
 */
int main(int argc, const char * argv[])
{
  // Check the command line arguments.
  if(argc == 2) {
    printf("usage: %s <number> \n", argv[0]);
    
  }
  else
    {
      robPrintAscii();
      return -1;
    }
  // Convert the command-line argument to a number.
  int num = atoi(argv[1]);

  robPrintAscii();

   robPrintMessage(num);

   mealy17();
   mok17();
  return 0;
}
