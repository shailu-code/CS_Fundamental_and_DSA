#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int n=numbers.size();
        int sum=0,left=0,right=n-1;
        vector<int> arr(2);

        while(left < right)
        {
            sum = numbers[left] + numbers[right];
            if(sum == target)
            {
                arr[0] = min(left+1,right+1);
                arr[1] = max(left+1,right+1);
                break;
            }
            if (sum<target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return arr;
    }
};