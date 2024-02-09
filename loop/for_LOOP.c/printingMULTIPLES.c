// printing table in ascending order..

#include <stdio.h>
int main(){
int a,i,d;
printf("Enter the value of a:");
scanf("%d", &a);

for(i=1;i<11;i++){
    printf("The %d multiple of %d: ", i,a);
    d=a*i;
    printf("%d\n",d);
}
return 0;
}

// printing table in descending order...

#include <stdio.h>
int main(){
int a,i,d;
printf("Enter the value of a:");
scanf("%d", &a);

for(i=10;i>0;i--){
    printf("The %d multiple of %d: ", i,a);
    d=a*i;
    printf("%d\n",d);
}
return 0;
}

