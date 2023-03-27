#include <stdio.h>
int main(){
    int marks[10] = {80,25,66,34,95,10,55,40,33,24};
    for(int i=0;i<10;i++){
        if(marks[i]<35){
            printf("%d ",i);
        }
    }
}