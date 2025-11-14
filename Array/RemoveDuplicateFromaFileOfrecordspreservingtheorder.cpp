#include <iostream>
#include <vector>
using namespace std;

void removeDuplicate(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0) return;

    int r = 0; // write position

    for (int i = 0; i < n; ++i)
    {
        bool seenBefore = false;
        for (int j = 0; j < i; ++j)
        {
            if (nums[i] == nums[j])
            {
                seenBefore = true;
                break;
            }
        }
        if (!seenBefore)
        {
            nums[r] = nums[i];
            ++r;
        }
    }

    nums.resize(r);
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    removeDuplicate(nums);

    cout << "Array after removing duplicates: ";
    for (int val : nums)
        cout << val << " ";
    cout << endl;
    return 0;
}
