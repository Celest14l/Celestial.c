#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int i=1;
    while(a>0){
        a=a*(a-i);
        ++i;
    }
    return 0;
}
