#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

typedef long long ll;

int n, m, num[8];
vector<int> v;

void track()
{
    if(v.size() == m)
    {
        for(int i : v) cout << i << ' ';
        cout << '\n';
        return;
    }

    for(int i = 0; i < n; i++)
    {
        v.push_back(num[i]);
        track();

        v.pop_back();
    }
}

int main()
{
    onlycc;
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> num[i];
    sort(num, num+n);
    track();

    return 0;
}
