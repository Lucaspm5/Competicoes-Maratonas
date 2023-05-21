#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    set<int> auxiliary;

    int n, i, valor;

    cin >> n;

    for (i = 0; i < n; i++) 
    {
        int a;
        cin >> a;
        auxiliary.insert(a);
    }

    cin >> valor;

    set<int>::iterator support;

    for (support = auxiliary.begin(); support != auxiliary.end(); support++) 
    {
        if (auxiliary.count(valor - *support)){
            cout << *support << " " << valor - *support << endl;
            return 0;
        }
    }

    return 0;
}
