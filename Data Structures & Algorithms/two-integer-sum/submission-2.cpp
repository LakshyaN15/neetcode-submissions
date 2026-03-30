//TC: O(n^2)
//SC: O(1)
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i=0; i<nums.size(); i++){
//             for(int j=i+1; j<nums.size(); j++){
//                 if(nums[i] + nums[j]==target)
//                 return {i,j}; //return indices
//             }
//         }
//     return {}; // return an empty arr
//     }
// };


//Sorting
//T.C: O(nlogn)
//S.C: O(n)
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<pair<int,int>> A;
//         for(int i=0; i<nums.size(); i++){
//             A.push_back({nums[i],i});
//         }
//         sort(A.begin(),A.end());

//         int i=0, j=nums.size()-1;
//         while(i<j){
//             int current=A[i].first+A[j].first;
//             if(current==target){
//                 return {min(A[i].second,A[j].second),
//                 max(A[i].second,A[j].second)};
//             }
//             else if(current<target){
//                 i++;
//             }
//             else {j--;}
//         }
//     return {};
//     }
// };

//Hash Map - Two Pass
//TC: O(n)
//SC: O(n)
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int>idx;
//         for(int i=0; i<nums.size(); i++)
//         {
//             idx[nums[i]]=i;
//         }

//         for(int i=0; i<nums.size(); i++){
//             int diff=target-nums[i];
//             if(idx.count(diff) && idx[diff]!=i){
//                 return {i,idx[diff]};
//             }
//         }
//     return {};
//     }
// };

//Hash Map - One Pass
//TC:
//SC:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>hmap;
        for(int i=0; i<n; i++)
        {   int diff=target-nums[i];
            if(hmap.find(diff) != hmap.end()){
                return {hmap[diff],i};
            }
        hmap.insert({nums[i],i});
        }

    return {};
    }
};


