#include <stdio.h>

int main()
{

int k = (-3); //KEY = the number of charcters that need to be shifted to return english


    FILE *cypher;
    FILE *message;
    
    cypher = fopen("cypher.txt", "r");
    message = fopen("message.txt", "w");
    
    while (feof(cypher) == 0){
        char phi;
        fscanf(cypher, "%c", &phi);
      
          
    if (phi == 32){
     fprintf(message, "%c", phi); //Just prints the space
     printf("%c", phi);
    
    }else if((phi + k) > 90){ // If it exceeds 'Z' after k is added, then simply take 26 away then add k
        fprintf(message, "%c", phi - 26 + k); 
        printf("%c", phi - 26 + k);
        
    } else if ( (phi + k) < 65 ){ //If it exceeds 'Z' after k is added, then simply add 26 away then add k
        fprintf(message, "%c", phi + 26 + k);
        printf("%c", phi + 26 + k);
            
    } else {fprintf(message, "%c", phi + k);// if within the bounds of ASCII 'A' and 'Z' just add k
            printf("%c", phi + k);
        }

}
    }