class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        vector<int> tmp;
        while(i<m){
            tmp.push_back(nums1[i++]);
        }
        int j=0;
        while(j<n){
            tmp.push_back(nums2[j++]);
        }
        sort(tmp.begin(),tmp.end());
        for(int i=0; i<m+n; i++){
            nums1[i]=tmp[i];
        }
        
    }
};