#include <stdio.h>
int main(){
int a,n,i;
printf("Enter a natural no.: ");
scanf("%d", &n);
i=1;
a=0;
while(i<=n){
    a=a+i;
    i++;
    
    
}
printf("The sum of %d natural no. is : %d",n,a);
return 0;
}