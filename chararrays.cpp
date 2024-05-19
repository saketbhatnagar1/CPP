#include <iostream>
using namespace std;
// function to return length of a string;
int returnLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != 0; i++)
    {
        count++;
    }
    return count;
}
// function to reverse a string
void reverStr(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e) //{1,2,3,4,5}
    {
        swap(name[s++], name[e--]);
        /*
         swap(name[s++], name[e--]);
         is the same as:
         swap(name[s],name[e]);
         s++;
         e--;
    */
    }
    cout << "reverse is : " << name << endl;
}
// function to check palindrome

bool checkPalindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= n)

    {
        if (name[s] != name[e])
        {
            cout << "Not palindrome\n";
            return 0;
        }
        else
        {
            cout << name << ": is palindrome " << endl;
            return 1;
        }
    }
}
int main()

{
    char name[20] = "bab";
    // cin >> name;
    int a = returnLength(name);
    cout << a << ": is the length of the string\n";
    reverStr(name, a);
    checkPalindrome(name, a);

    return 0;
}