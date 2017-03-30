#include <stdio.h>
#include <stdlib.h>
#include <time.h>






int main(int argc, char *argv[])
{
    
    
int x1, x2, x3;

srand (time(NULL));
    
    
x1=rand ()%2;    
x2=rand ()%2;    
x3=rand ()%2;    
    
    


printf ("[%d][%d][%d]", x1,x2,x3);    
    
    
    
  
  system("PAUSE");	
  return 0;
}
