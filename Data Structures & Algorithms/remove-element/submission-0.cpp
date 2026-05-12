// //TC: O(n), as extra arr is used
// //SC: O(n) 
// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         vector<int>res;
//         int n=nums.size();
//         for(int i=0; i<n ;i++){
//             if(nums[i]!=val) res.push_back(nums[i]);
//         }
//         for(int i=0; i<res.size(); i++)
//         {
//             nums[i]=res[i];
//         }
//         return res.size();
//     }
// };

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    int k=0;
    for (int i=0; i<nums.size(); i++){
        if(nums[i]!=val){
            nums[k++]=nums[i];
        }
    }
    return k;
    }
};