//   https://github.com/viren-sureja/Love-Babbar-450/blob/master/01_array/26_sell_buy_stock_atmost_twice.cpp

//https://leetcode.com/problems/remove-duplicate-letters/
======================================================================================
    MATRIX QUESTIONS
//   https://github.com/viren-sureja/Love-Babbar-450/blob/master/02_matrix/03_median_in_row_wise_sorted_matrix.cpp

=============================================================================

Input: s = "cbacdcbc"
Output: "acdb"

class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>cnt(128,0);
        vector<bool>vis(128,false);
        string res="0";
        for(int i=0;i<s.length();i++){
            cnt[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            cnt[s[i]]--;
            if(vis[s[i]])continue;
          
            while(res.back()>s[i] && cnt[res.back()]){
                vis[res.back()]=false;
                res.pop_back();
            }
            res+=s[i];
              vis[s[i]]=true;
        }
        return res.substr(1);
    }
};
