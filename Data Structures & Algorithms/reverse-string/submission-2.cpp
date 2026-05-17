// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//            string temp;
//         for(int i=s.size()-1; i>=0; i--){
//             temp.push_back(s[i]);
//         }
//         for(int i=0; i<s.size(); i++)
//         {
//             s[i]=temp[i];
//         }
//     }
// };

class Solution {
public:
    void reverseString(vector<char>& s) {
         reverse(s,0,s.size()-1);
    }

    private:
    void reverse(vector<char>& s,int l, int r){
        if(l<r){
            reverse(s,l+1,r-1);
            swap(s[l],s[r]);
        }
    }
};