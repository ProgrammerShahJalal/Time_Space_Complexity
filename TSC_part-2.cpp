#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, sum = 0; // T==> O(1) S==> O(1)
    cin >> n;       // T==> O(1)

    vector<int> a(n*n); // T==> O(n^2) S==> O(n^2)

    for (int i = 0; i < n*n; i++) // T==> O(n^2)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n*n; i++) // T==> O(n^2)
    {
        sum += a[i];
    }

    cout << sum << endl; // T==> O(1)

    // Total Time Complexity = O(1) + O(1) + O(n^2) + O(n^2) + O(n^2)+ O(1) = O(n^2)
    // Total Space Complexity = O(1) + O(n^2) = O(n^2)
    return 0;
}