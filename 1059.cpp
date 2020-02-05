#include <cstdio>
#include <algorithm> 
#include <vector> 
using namespace std;
int main(){
    int n;
    int num, target,last,prev, result = 0;
    scanf("%d", &n);
    vector <int> v(n);
    for(int i = 0 ; i < n ;  i++){
        scanf("%d", &v[i]);
    }
    scanf("%d", &target); 
    sort(v.begin(), v.end());
    prev = 1;

   for(int i = 0; i < n; i++){
       if(target <= v[i]){
           last = v[i];
           break;
       }
       prev = v[i]+1; 
   }
   int count = 0; 
   for(int i = prev; i <last; i++){
       for(int j = i+1; j < last; j++){
           if( i <= target && target <= j) {
               count++;
           }
       }
   }
    printf("%d\n", count); 
}