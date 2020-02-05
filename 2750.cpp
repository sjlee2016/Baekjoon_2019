#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n, num;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num); 
             v.push_back(num);
    }
    sort(v.begin(), v.end()); 
    for(auto x: v)
        printf("%d ",x); 
    printf("\n");
    return 0;
}