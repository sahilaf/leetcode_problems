#include<bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    int flag=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    flag=1;
                }
            }
        }
        if(flag==0)
        return false;
        else return true;
}
int main()
{
    vector<int>a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(1);
    cout<<containsDuplicate(a);
}