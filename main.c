#include <stdio.h>



int main(void){
    int i;

    for( i = 65; i < 90; i = i + 1 ){
      printf("%c, %d\n", i, i);
   }

    return 0;
}