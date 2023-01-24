#include<bits/stdc++.h>
using namespace std;


// O(n^2logn)
int main(){
    int n;
    
 for(int k=1;k<=n;k++) // O(n)
{
	if(k%2==0){ // O(logn)
		for(int i=1;i<=n;i++) // O(n)
		{
			cout<<k<<" "<<i<<"\n";
		}
	}
}

    return 0;
}