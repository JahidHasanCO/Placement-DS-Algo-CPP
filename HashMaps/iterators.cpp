#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> m;

    m["abc"] = 1;
    m["abc1"] = 2;
    m["abc2"] = 3;
    m["abc3"] = 4;
    m["abc4"] = 5;
    m["abc5"] = 6;
    m["abc6"] = 7;
    m["abc7"] = 8;

    unordered_map<string, int>::iterator it;
    it = m.begin();

    while (it != m.end())
    {
        cout << "Key: " << it->first << " Value: " << it->second << endl;
        it++;
    }

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    vector<int>::iterator it1;
    it1 = v.begin();

    while (it1 != v.end())
    {
        cout << *it1 << " ";
        it1++;
    }
    cout << "\n";

    return 0;
}
