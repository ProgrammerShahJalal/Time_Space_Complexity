#include<bits/stdc++.h>
using namespace std;

int main(){
    // Time = O(√(n))
    // Space = O(1)
    int n;
    cin>>n;
    for(int i=0; i*i<=n; i++){
        if(n%i==0){
            cout<<i<<endl;
            cout<<(n/i)<<endl;
        }
    }
    return 0;
}