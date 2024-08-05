#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENTER QUERY:" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // pre compute:

    // hash:
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1; //[1,2,3,4,5,6,7,8,9,10,11,12,13]
    }

    int q;
    cout << "ENTER QUERY:" << endl;
    cin >> q;

    while (q--)
    {
        int number;
        cin >> number;
        // fetch:
        cout << number << "appears :";
        cout << hash[number] << "times" << endl;
    }
    
    // for strings:

    string s;
    cin >> s;
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}
