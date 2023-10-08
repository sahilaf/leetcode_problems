#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> a;vector <int> b;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    a.push_back(i);
                    a.push_back(j);
                }
            }
        }
        unordered_set<int> uniqueSet;  
        vector<int> result;

     for (const auto& num : a) {
        if (uniqueSet.find(num) == uniqueSet.end()) {
            result.push_back(num);
            uniqueSet.insert(num);
        }
    }

    return result;
}
int main()
{
    int target;cin>>target;
    int c;cin>>c;
    vector<int> n;
    for(int i=0;i<c;i++)
    {
        int x;cin>>x;
        n.push_back(x);
    }
    twoSum(n,target);
}

