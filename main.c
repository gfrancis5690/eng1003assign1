#include <stdio.h>



int main(void){
    int i;
    int temp;
    int temp2;
    int k = 1;
    for( i = 65; i < 91; i = i + 1 )
    {
      temp = i-65;
      temp = (temp + k)%26;
      
      temp2 = (temp - k)%26;
      if(temp2 < 0)
      {
          temp2 = 25;
          //I must have found Z, set temp2 to 'Z' value between 0-25
      }
      temp2 =  temp2 + 65;
      printf("%c, enc: %d, %c, dec: %d %c\n", i, temp, temp+65, temp2-65, temp2);
   }

    return 0;
}