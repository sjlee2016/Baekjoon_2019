#include <cstdio>
using namespace std;
int main(){
    int d;
    scanf("%d", &d);
    for(int i = 0 ; i <d; i++){
        if(i%2==1){
            printf(" "); 
        }
        for(int j = 0; j < d; j++){
            printf("* ");
        }
        printf("\n");
    }
}