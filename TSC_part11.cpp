#include<bits/stdc++.h>
using namespace std;


// O(nlogn)
int main(){
    int n;
    
    for(int k=1;k<=n;k=k*2) // O(logn)
{
	for(int i=1;i<=n;i++) // O(n)
	{
		cout<<k<<" "<<i<<"\n";
	}
}

    return 0;
}