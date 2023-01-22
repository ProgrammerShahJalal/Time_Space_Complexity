#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, mini, maxi, sum, mult;
    cin >> a >> b >> c;

    mini= min({a, b, c});
    maxi= max({a, b, c});
    sum=a+b+c;
    mult=a*b*c;

    cout<<mini<<endl;
    cout<<maxi<<endl;
    cout<<sum<<endl;
    cout<<mult<<endl;
    
    return 0;
}