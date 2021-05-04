#include<cstdio>
using namespace std;

int main(){
    
    int n, num, arr[100001] = {};
    scanf("%d", &n);
    for(int i=1; i<=n-2; i++){
        scanf("%d", &num);
        arr[num]=num;
    }
    
    for (int i=1; i<=n;i++){
        if(arr[i]==0){
            printf("%d\n", i);
        }
    }

}