#include<stdio.h>
int main(){
   int phy, chem, maths;
   float total;

   printf("Enter u phy marks: ");
   scanf("%d", &phy);
   printf("Enter u chem marks: ");
   scanf("%d", &chem);
   printf("Enter u maths marks: ");
   scanf("%d", &maths);

   total=(phy+chem+maths)/3;

   if((total<40) || (phy<33) || (chem<33) || (maths<33) ){
printf("your total percentage is %f and you are failed : ", total);
   }
   else{
    printf("You passed!!");
   }

   
    return 0;
}
