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

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> A;
        for(int i=0; i<nums.size(); i++){
            A.push_back({nums[i],i});
        }
        sort(A.begin(),A.end());

        int i=0, j=nums.size()-1;
        while(i<j){
            int current=A[i].first+A[j].first;
            if(current==target){
                return {min(A[i].second,A[j].second),
                max(A[i].second,A[j].second)};
            }
            else if(current<target){
                i++;
            }
            else {j--;}
        }
    return {};
    }
};
