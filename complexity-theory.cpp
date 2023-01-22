#include <bits/stdc++.h>
using namespace std;
int main()
{

    /* time and space complexity

    ==> Judge time and space
    ==>  */

    int n, sum = 0; // T==> O(1) S==> O(1)
    cin >> n;       // T==> O(1)

    // vector<int>a; T==> O(1)
    vector<int> a(n); // T==> O(n) S==> O(n)

    for (int i = 0; i < n; i++) // T==> O(n)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) // T==> O(n)
    {
        sum += a[i];
    }

    cout << sum << endl; // T==> O(1)

    // Total Time Complexity = O(1) + O(1) + O(n) + O(n) + O(n)+ O(1) = O(n)
    // Total Space Complexity = O(1) + O(n) = O(n)
    return 0;
}