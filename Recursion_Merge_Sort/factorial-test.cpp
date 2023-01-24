// #include <bits/stdc++.h>
// using namespace std;

// int factorial(int n)
// {
//     if (n == 0 || n == 1)
//         return 1;
//     return n * factorial(n - 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << factorial(n) << endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#include<stdio.h>

int print(int n)
{
    if(n==0)
        return 0;
    print(n-1);
    cout<<n<<" ";
}
int main(){
  print(5);

    return 0;
}