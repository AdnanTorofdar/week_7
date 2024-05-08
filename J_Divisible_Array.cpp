//-----------_The_eRRoR_----------
//---------Adnan_Torofdar----------
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007
void _The_eRRoR_()
{
    ll n;
    cin >> n;
    ll sum = (n * (n + 1)) / 2;
    ll j = 1;
    for (int i = 1; i <= n; i++)
    {

        if (sum % n == 0)
        {
            break;
        }
        else
        {
            sum += 1;
            j++;
        }
    }
    cout << j << " ";
    for (int i = 2; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << nl;
}
int main()
{
    fast;
    ll test_case = 1;
    cin >> test_case;
    while (test_case--)
        _The_eRRoR_();
    return 0;
}