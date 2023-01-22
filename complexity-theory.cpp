#include <bits/stdc++.h>
using namespace std;
int main()
{

    /* time and space complexity

    ==> Judge time and space
    ==>  */

    int n, sum = 0; // O(1)
    cin >> n;       // O(1)

    // vector<int>a; O(1)
    vector<int> a(n); // O(n)

    for (int i = 0; i < n; i++) //O(n)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) //O(n)
    {
        sum += a[i];
    }

    cout << sum << endl; //O(1)

    // Total Time Complexity = O(1) + O(1) + O(n) + O(n) + O(n)+ O(1) = O(n)
    return 0;
}