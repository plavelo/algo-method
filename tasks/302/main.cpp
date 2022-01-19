#include <bits/stdc++.h>

using namespace std;

// clang-format off
template <typename T,typename S,typename R> inline tuple<T,S,R> gettriple(){T r1;S r2;R r3;string s;getline(cin,s);istringstream iss(s);iss>>r1>>r2>>r3;return {r1,r2,r3};}
// clang-format on

int main()
{

    auto [n, x, y] = gettriple<int, int, int>();

    for (int i = 2; i < n; i++)
    {

        int tmp = (x + y) % 100;

        x = y;

        y = tmp;
    }

    cout << y << endl;

    return 0;
}