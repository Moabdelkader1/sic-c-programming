#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int sum=0;
    printf("please enter a number\n");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
            }

    }
    if(sum==num){
            printf("the number is perfect\n");

          }
          else{
            printf("the number is not perfect\n");

        }
    return 0;

}
