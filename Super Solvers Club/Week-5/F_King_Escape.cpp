#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ax, ay, bx, by, cx, cy;
    cin >> n >> ax >> ay >> bx >> by >> cx >> cy;
    if (((bx < ax) == (cx < ax)) && ((by < ay) == (cy < ay)))
        yes;
    else
        no;

    return 0;
}