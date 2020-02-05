#include <cstdio>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;


int main(){
    int n, num, num2;
    scanf("%d", &n);

    vector <pair<int,int> > v(n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &num, &num2); 
        v[i].first = num;
        v[i].second= num2;
    }
    sort(v.begin(), v.end()); 
    for(auto x: v)
        printf("%d %d\n",x.first, x.second); 

    return 0;
}