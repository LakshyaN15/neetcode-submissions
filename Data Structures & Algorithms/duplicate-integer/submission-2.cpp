// // TC: O(n)
// // SC: O(n)
// class Solution {
// public:
//     bool hasDuplicate(vector<int>& nums) {
//         unordered_set<int> seen;
//         for(int num : nums){
//             if(seen.count(num)) return true;
        
//         seen.insert(num);
//     }
//     return false;
//     }
// };


// class Solution {
// public:
//     bool hasDuplicate(vector<int>& nums) {
//         for(int i=0; i<nums.size(); i++)
//         for(int j=i+1; j<nums.size(); j++){
//             if(nums[i]==nums[j]) return true;
//         }
//         return false;
//     }
// };
// TC: Outer loop - n times, inner n-i times, n(n-1)/2 = O(n^2)
// SC: O(1)



class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==nums[i+1]) return true;
        }
        return false;
    }
};