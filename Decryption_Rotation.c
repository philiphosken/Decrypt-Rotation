#include <stdio.h>

int main()
{
char betatxt[] = "Phil io p i o"; //Text that is to become Decrypted (PHIL)
int N = 13; //Number of Values in the Array above
int i; //Counter Index
int k = -1; //KEY or the number of charcters shifted in the rotation cypher (left neg right pos)

if (k > 26 || k < -26){
    printf("%d is an invalid value for k. Select an interger between -25 and 25", k);
} else


for (i = 0 ; i < N ; ++i){
    int phi = betatxt[i]; //place holding integer
    
    if (phi == 32){
     printf("%c", phi); //Just prints the space)
    
    }else if((phi + k) > 90){
        printf("%c", phi - 26 - k); // if it try to shift to characters after 'Z' loop back to 'A'
        
    } else if ( (phi + k) < 65 ){
        printf("%c", phi + 26 - k);
            
    } else printf("%c", phi - k);
}
      return 0;
}
