#include <iostream>
using namespace std;

// count the digits of a number & reverse the number
void printdigits(int n)
{
    int count = 0;
    int rev = 0;

    while (n > 0)
    {

        rev = (rev * 10) + (n % 10);
        count++;
        n = n / 10; // Remove the last digit from n
    }
    cout << count << " " << rev;
}
// checck palindrome:
void checkPalindrome(int n)
{
    int count = 0;
    int rev = 0;
    int palindrome = n;

    while (n > 0)
    {

        rev = (rev * 10) + (n % 10);
        count++;
        n = n / 10; // Remove the last digit from n
    }
    if (palindrome == rev)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}
// amstrong number => sum of cube of digit:

void Amstrong(int a)
{

    int sum = 0;
    while (a > 0)
    {
        int digit = (a % 10);
        sum += (digit * digit * digit);
        a = a / 10;
    }
    cout << sum;
}

void printdivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
        else
        {
        }
    }
}
// more optimized approach to find divisors:

//////////////////////////////////////////

// maintain a count of no. of divisors of n,if no. of divisors>2 then it will not be a prime no.
void isprime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (count > 2)
        {
            cout << "Not Prime" << endl;
            break;
        }
        else
        {
            if (n % i == 0)
            {
                cout << i << endl;
                count++;
            }
            else
            {
            }
        }
    }
}
int main()
{
    cout << "hello" << endl;
    int aa = 192;

    isprime(36);
    return 0;
}
