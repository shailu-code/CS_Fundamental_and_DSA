#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>

using namespace std;

class Solution1{
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> ans;
        unordered_map<int, int> mp;
        unordered_map<int, int> mp1;
        for (int x: nums1)
        {
            mp[x]++;
        }
        for (int y: nums2)
        {
            mp1[y]++;
        }
        for(auto it: mp)
        {
            if(mp1.find(it.first)!= mp1.end())
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};

class OptimalSolution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> ans;
        unordered_set<int> s(nums1.begin(), nums1.end());
        for(int x: nums2)
        {
            if(s.find(x) != s.end())
            {
                ans.push_back(x);
                s.erase(x);
            }
        }
        return ans;
    }
};