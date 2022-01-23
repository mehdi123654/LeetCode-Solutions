//This is only my attempt of approaching the right solution
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> n;
        vector<int>::iterator it;
        vector<int>::iterator i;
        for(it=nums.begin();it<nums.end();it++)
        {
            for(i=(nums.begin()+1);i<nums.end();i++)
        { 
            if((*it)+(*i)==target)
            {n.push_back(*it);
            n.push_back(*i);
            return n;
            }
        }
        }
    }
};
int main()
{
   Solution s;
   int i;
    vector<int> x;
    x.push_back(5);
    x.push_back(6);
    x.push_back(7);
    x.push_back(2);
    x.push_back(1);
    vector<int> y;
    vector<int>::iterator it;
    y=s.twoSum(x,13);
    it=y.begin();
    cout<<"["<<(*it)<<","<<(*it+1)<<"]"<<endl;

}
