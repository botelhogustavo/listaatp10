#include <stdio.h>
#include <stdlib.h>
int i = 0;
int main(){
    printf("%d", i);
    if(i < 10) {
        i++;
        main();
    }
    else getchar();
    return 0;
}
