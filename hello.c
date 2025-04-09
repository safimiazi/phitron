#include <stdio.h>

int main() {
    int tk = 0;
    scanf("%d", &tk);
    if(tk >= 100) {
        printf("burger khabo\n");
    }else if (tk >= 50){
        printf("fuchka khabo\n");
    }else{
        printf("kuchu khabo na\n");
    }
    return 0;
}