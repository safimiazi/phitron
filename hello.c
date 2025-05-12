#include <stdio.h>

int main() {
   int N;
   scanf("%d", &N);
   for(int i = 1; i <= N + 3; i++){
        for(int j = 1; j <= i; j+2){
       if(i % 2 != 0){
           printf("%s", "#");
       }else {
           printf("%s", "-");
       }

   }
   printf("\n");
   }
    return 0;
}