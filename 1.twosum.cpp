#include<iostream>
#include<algorithm>
#include <utility>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;

        for(int i=0; i<nums.size(); i++){
            arr.push_back({nums[i],i});
        }

        sort(arr.begin(),arr.end());

        int left=0,right=arr.size()-1,sum=0;

        while(left<right){
            sum=arr[left].first+arr[right].first;

            if(sum==target) return {arr[left].second, arr[right].second};

            if(sum<target) left++;
            else right--;
        }
        return {};
    }
};