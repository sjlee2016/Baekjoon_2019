#include <stdio.h>

int main(){
 int N, min,max,num;
 scanf("%d", &N);
 scanf("%d", &min);
 max = min;
 for(int i = 1 ; i < N; i++){
     scanf("%d",&num);
     if(num<min){
         min = num;
    }
     if(num>max){
         max = num;
     }
 }
 printf("%d %d\n", min, max); 

}
