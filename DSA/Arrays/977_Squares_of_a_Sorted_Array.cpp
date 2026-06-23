#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        for (int i=0; i < nums.size() ; i++)
        {
            nums[i] = nums [i] * nums [i];
        }
        for (int i=0; i < nums.size() ; i++)
        {
            for (int j=i; j < nums.size() ; j++)
            {
                if ( nums[i] > nums[j])
                {
                    int temp;
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        return nums;
    }
};