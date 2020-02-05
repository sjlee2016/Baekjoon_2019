#include <cstdio>
using namespace std;
int calc(int n){
    if(n<0){
        return 0;
    }
    if(n<=2){
        return n;
    }
    if(n==3){
        return 4;
    }
    else {
        return calc(n-1) + calc(n-2)+ calc(n-3);
    }
}
int main(){
    int n, num;
    scanf("%d", &n);
    for(int i = 0 ; i < n; i++){
        scanf("%d", &num);
        printf("%d\n", calc(num));
    }
}