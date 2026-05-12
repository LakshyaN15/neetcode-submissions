
// //TC:O(n^2)
// //SC: O(1)

//Brute Force
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//     int n=nums.size();
//     for(int num:nums){
//         int count=0;
//         for(int i:nums){
//             if(i==num){
//                 count++;
//             }
//         }
//         if(count>n/2){
//             return num;
//         }
//     }
//     return -1;
//     }
// };

// //TC= O(n)
// //SC=O(n), extra space to store
// // Hash Map
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int,int>count;
//         int maxCount=0,res=0;
//         for(int num:nums){count[num]++; //major ele always exist is the assumption
//         if(count[num]>maxCount){
//             res=num;
//             maxCount=count[num];
//         }
//     }
//     return res;}
// };

// //TC: O(n)
// //SC: O(1) or O(n), depending on sorting algo
// // Sorting Algo
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//      sort(nums.begin(),nums.end());
//      return nums[nums.size()/2]; //idea is major element always occupy middle
//      }
// };


//TC:O(n)
//SC: O(1)
// //Boyer - Moore Voting Algo
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int res=0, count=0;
    for(int num:nums){
        if(count==0){
            res=num;
        }
        count += (num==res) ? 1:-1; 
    }
    return res;
    }
};
