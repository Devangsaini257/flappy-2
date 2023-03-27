#include <stdio.h>
int main(){
  int  arr[10]={1,2,-3,-4,-5,6,7,-8,-10};
  int count_neg=0;

  for(int i=1;i<=10;i++){
    if(arr[i]<0){
        count_neg++;
    }
  }

  printf("total neg alement of an array: %d",count_neg);

  return 0;
}
