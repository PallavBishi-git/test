#include<stdio.h>

int main(){
    int x = 0;
    while(1){
        printf("%d. Pallav\n",(x+1));
        x = x+1;
        if(x>=10){
            break;
        }

    }
    return 0;

}
