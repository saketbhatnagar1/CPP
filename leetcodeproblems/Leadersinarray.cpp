//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    // Function to find the leaders in the array.
public:
    vector<int> leaders(int n, int arr[])
    {

        vector<int> count;

        int max = INT_MIN;

        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] >= max)
            {
                count.push_back(arr[i]);
                max = arr[i];
            }
        }
        reverse(count.begin(), count.end());

        return count;

        // Code here
    }
};

//{ Driver Code Starts.

int main()
{

    return 0;
}

// } Driver Code Ends
