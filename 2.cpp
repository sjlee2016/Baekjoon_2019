#include <cstdio>
#include <string> 
using namespace std;

std::string solution(string &S){
    for(int i = 0 ; i < S.length()/2; i++){
        if(S[i]=='?'){
            if(S[S.length()-i]=='?'){
                S[S.length()-i]='a'; 
            }
            S[i] = S[S.length()-i]; 
        }else {
            if(S[S.length()-i] == '?'){  
               S[S.length()-i] = S[i];   
            }
            else if(S[i] != S[S.length()-i]){ // 둘다 ? 가 아닌데 다를때 
                return "NO"; 
            }
        }
    }

    if(S.length()%2==1){
        if(S[S.length()/2]=='?'){
            S[S.length()/2] = 'a'; 
        }
    }
    return S; 
}

int main(){
    char tmp[1001]; 
    scanf("%1000s", tmp);
    std::string a = tmp;  
    a = solution(a);
    printf("%s\n", a.c_str()); 
}
