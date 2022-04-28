#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

vector<int> candyStore(int a[], int n, int k)
{
    sort(a, a + n);
    k++;
    int d = n / k;
    if (n % k != 0)
    {
        d++;
    }

    int mini = 0;
    for (int i = 0; i < d; i++)
    {
        mini += a[i];
    }

    reverse(a, a + n);
    int maxi = 0;
    for (int i = 0; i < d; i++)
    {
        maxi += a[i];
    }

    vector<int> v;
    v.push_back(mini);
    v.push_back(maxi);

    return v;
}