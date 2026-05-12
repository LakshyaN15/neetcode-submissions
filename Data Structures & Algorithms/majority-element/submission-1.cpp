
// //TC:O(n^2)
// //SC: O(1)
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

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>count;
        int maxCount=0,res=0;
        for(int num:nums){count[num]++; //major ele always exist is the assumption
        if(count[num]>maxCount){
            res=num;
            maxCount=count[num];
        }
    }
    return res;}
};