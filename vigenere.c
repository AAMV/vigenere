
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])

{
// check the argument line
    if (argc != 2)
        {
        printf("The argument line is not OK");
        return 1;
        }
        
 // check and transform the key    
      string key = argv[1];
      
      for (int i = 0, n = strlen(key); i < n; i++)
        {
        if ((key[i] >= 'A') && (key[i] <= 'Z'))
        
                key[i] = key[i] - 'A' + 1;
        else
             if ((key[i] >= 'a') && (key[i] <= 'z'))
        
                key[i] = key[i] - 'a' + 1;
             
             else
                {
                printf("Only alphabetic characters");
                return 1;
                }
        }
     
      string mensaje = GetString();
       
      int j = 0;
      
   //message encoding    
      for(int i = 0, n = strlen(mensaje); i < n; i++)
        
           {           
                char c;
                if ((mensaje[i] >= 'a') && (mensaje[i] <= 'z'))
                    {
                    if ((mensaje[i] + key[j]) >'z'+ 1)
                         
                        c = mensaje[i] + key [j] - 26;
                                              
                    else
                      
                      c = mensaje[i] + key[j];
                       
                    }
                else
                    {
                    if ((mensaje[i] >= 'A') && (mensaje[i] <= 'Z'))
                      
                        {
                        if ((mensaje[i] + key[j]) > 'Z' + 1)
                     
                           c = mensaje[i] + key [j] - 26;
                       
                        else
                       
                            c = mensaje[i] + key[j];   
                        }
                     else
                        {
                            c = mensaje[i] + 1; 
                            j = j-1;
                        }           
                    }
             
                printf("%c", c - 1);
                j++;
                
     //repit key        
                if (j >= strlen(key)) j = 0;
             
      
      }   
 
        printf("\n");

}
