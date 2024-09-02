#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums;
    nums = {3, 1, -2, -5, -4};
    vector<int> neg;
    vector<int> pos;
    for (int i = 0; i < nums.size(); i++)
    {

        if (nums[i] >= 0)
        {
            pos.push_back(nums[i]);
        }
        else
        {
            neg.push_back(nums[i]);
        }
    }
    int p = 0;
    int n = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 2 == 0 && pos.size() > p)
        {
            nums[i] = pos[p++];
        }
        else if (n < neg.size())
        {
            nums[i] = neg[n++];
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
    }
    return 0;
}
