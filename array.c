#include<stdio.h>

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int x = 0;
    while(x<10){
        printf("%d\n",a[x]);
        x = x+1;
    }

    return 0;
}