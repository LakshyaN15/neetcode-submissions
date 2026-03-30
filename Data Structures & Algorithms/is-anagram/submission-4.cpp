// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.size()!=t.size()) return false;

//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());

//         for(int i=0; i<s.size(); i++){
//             if(s[i]!=t[i]) return false;
//         }
//         return true;
//     }
// };


//TC: O(nlogn+mlogm)
//SC: O(1) or O(n+m) depending on sorting algo
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.size()!=t.size()) return false;

//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());

//         return s==t;
//     }
// };

class Solution {
    public:
        bool isAnagram(string s, string t) {
           if(s.size()!=t.size()) return false;
              

                 unordered_map<char,int> countS;
                    unordered_map<char,int> countT;
                     
                         for(int i=0; i<s.size();i++)    {
                             countS[s[i]]++;
                                 countT[t[i]]++;
                                    }

                                       return countS==countT;
                                           }
                                           };

