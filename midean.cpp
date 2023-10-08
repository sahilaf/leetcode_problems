#include<bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> x;
        for(int i=0;i<nums1.size();i++)
        {
            x.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            x.push_back(nums2[i]);
        }
        sort(x.begin(),x.end());
        if(x.size()%2==0)
        {
            int m=x.size()/2-1;
            int n=m+1;
            cout <<m<<" "<<n<<"\n"<<x[m]<<" "<<x[n]<<" ";
            
            float median=(float)(x[m]+x[n])/2;
            return median;
        }
        else
        {
            float m=x.size()/2;
            return (float)x[m];
        }
}
int main()
{
    vector<int> nums1;
    vector<int> nums2;
    nums1.push_back(1);
    nums1.push_back(2);
    nums2.push_back(3);
    nums2.push_back(4);
    cout<<findMedianSortedArrays(nums1,nums2);
}