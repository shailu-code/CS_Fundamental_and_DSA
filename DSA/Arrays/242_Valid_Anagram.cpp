#include <iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.size() != t.size())
        {
            return false;
        }

        unordered_map <char, int> mp;
        for (char x : s)
        {
            mp[x]++;
        }
        for (char y : t)
        {
            mp[y]--;
        }

        for (auto it: mp)
        {
            if(it.second != 0)
            {
                return false;
            }
        }
        return true;       
    }
};