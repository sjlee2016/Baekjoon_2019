#include <cstdio>
#include <vector> 
#include <algorithm>
using namespace std;
int main(){
    int num, n;
    int total = 0 ;
    int current = 0; 
    scanf("%d", &num);
    vector <int> v (num); 
    for(int i = 0; i < num; i++){
        scanf("%d", &v[i]); 
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < num; i++){
        current = 0;
        for(int j = i; j >= 0; j--){
            current+= v[j];
        }
        total += current;
    }

    printf("%d\n", total);
    
}