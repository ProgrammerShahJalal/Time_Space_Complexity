#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    for(int i=0;i<n;i++) // O(n)
    {
        for(int j=i;j<n;j++) // O(n-i)
        {
            cout<<i<<" "<<j<<"\n";
        }
    }
 // T(n) = n(n-1)/2 = (n^2 ) / (n/2) = O(n^2)
    return 0;
}
