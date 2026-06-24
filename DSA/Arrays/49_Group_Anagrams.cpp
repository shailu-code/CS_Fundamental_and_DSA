#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> mp;
        string temp;
        for (string word : strs)
        {
            temp = word;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(word);
        }
        vector<vector<string>> ans;
        for(auto it : mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};