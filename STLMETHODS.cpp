#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{

    vector<int> v;
    v = {1, 2, 3, 4, 5, 6, 7, 8};
    // iterator in vector
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // instead::in vector
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // for each::in vector
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    // deletion :: in vector usin erase(start,end)
    v.erase(v.begin() + 1, v.begin() + 4); //{1, 2, 3, 4, 5, 6, 7, 8}=>{1,5,6,7,8};

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    // insert function insert(location,No. of elements we want to insert,No. we want to insert)
    v.insert(v.begin() + 1, 3, 69);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    // :

    

    return 0;
}
