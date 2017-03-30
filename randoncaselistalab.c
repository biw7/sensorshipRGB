#include <stdio.h>
#include <stdlib.h>
#include <time.h>






int main()
{
   int op; 
    
    
    
   
   
    
    
    
    
    
    
    srand(time(NULL));
    op = rand () % 8 + 1; 
   
    
    
    
   
    
    
    
   switch (op) {
        
        case 1: 
             printf ("COD1_PARAR");
                       
            
             break;
             
        
        case 2:
            printf ("COD2_ANDAR");
                       
            
             break;
             
             
             
             
             
        case 3:
              printf ("COD3_AUMENTARVELOCIDADE");
                       
            
             break;
             
             
        case 4:
              printf ("COD4_REDUZIRVELOCIDADE");
                       
            
             break;
             
       
       case 5:
              printf ("COD5_VIRARADIREITA");
                       
            
             break;
       
       
       case 6:
             printf ("COD6_VIRARAESQUERDA");
                       
            
             break;
       
       
       
       case 7:
             printf ("COD7_DESLIGAR");
                       
            
             break;
            
       
       case 8:          
                 
       printf ("COD8_NADA");
                       
         break;       
                               
}
  
  system("PAUSE");	
  return 0;
}
