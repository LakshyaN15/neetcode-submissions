// //TC: O(n), as extra arr is used
// //SC: O(n) 
//Brute Force
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


//TC: O(n)
//SC: O(1)
// Two Pointer 
// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//     int k=0;
//     for (int i=0; i<nums.size(); i++){
//         if(nums[i]!=val){
//             nums[k++]=nums[i];
//         }
//     }
//     return k;
//     }
// };
//
//
// Two Pointer - II
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0;
        while(i<n){
            if(nums[i]==val){
                nums[i]=nums[--n];
            }
            else {
                i++;
            }
        }
    return n;
    }
};
