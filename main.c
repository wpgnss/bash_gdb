#include <stdio.h>

void main(int argc, char *argv[] )
{
   printf("Hello!\n");
   
   if(argc < 2){
      printf("No arguments.\n");
   }
   else{
      printf("Argument : %s\n", argv[1]);
   }
}