#include <iostream>
#include <vector>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
    int maxArea(vector<int>& height) 
    {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int area=0, maxArea=0;

        while (left<right)
        {
            area = (right - left) * (min (height[left] , height[right]));

            if (area > maxArea)
            {
                maxArea = area;
            }

            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return maxArea;
    }
};