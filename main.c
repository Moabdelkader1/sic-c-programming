#include <stdio.h>
#include <stdlib.h>

int sum(int arr[],int num){
    int sum = 0;
    for (int i =0; i < num; i++){
        sum+= arr[i];
    }
    printf("\nThe sum of non duplicated numbers is %d", sum);
    return 0;
}

int main(){

 int counter=0;
 int i,j;
 int arr1[500];
 int arr2[500];
 printf("please enter 20 numbers ");
 for( i=0;i<20;i++){
    scanf("%d",&arr1[i]);
 }
 for( i=0;i<20;i++){

    for( j=0;j<counter;j++){
        if(arr1[i]==arr2[j])
            break;
        }
      if(j==counter){
        arr2[counter]=arr1[i];
        counter++;
      }
    }
    printf("the numbers of the unique array are:  ");
    for(i=0;i<counter;i++){
        printf("%d ",arr2[i]);
    }

        return sum(arr2,counter);
 }







