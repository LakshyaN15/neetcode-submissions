//TC: O(m*nlogn) m=no of strs and n=len of longest str
//SC: O(m*n)
// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         unordered_map<string,vector<string>> res;
//         for(const auto& s:strs){
//             string sortedS=s;
//             sort(sortedS.begin(),sortedS.end());//Eg. eat -> aet, tan-> ant
//             res[sortedS].push_back(s); // eg res[aet].push_back(eat)=checks if aet
//             //is present in sortedS if yes then push to res
//         }
//         vector<vector<string>> result;
//         for(auto& pair: res){
//             result.push_back(pair.second);
//         }
//         return result;
//     }
// };

/*---------2) Hash Table----------*/

//TC: O(m*n)
//SC: O(m)-> extra space and O(m*n) space for output list
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string,vector<string>> res;
        for(const auto& s:strs){
            vector<int>count(26,0);
            for(char c:s){
                count[c-'a']++;
            }
        

        string key=to_string(count[0]);
        for(int i=1; i<26; i++){
            key+=','+ to_string(count[i]);
        }
        res[key].push_back(s);
    }
        vector<vector<string>> result;
        for(const auto& pair:res){
            result.push_back(pair.second);
        }
        return result;
    }
};
