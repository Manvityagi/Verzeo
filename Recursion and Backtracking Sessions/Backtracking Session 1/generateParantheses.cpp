/*
    TC - 2^n
*/
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string curr;
        helper(res, curr, n, n);
        return res;
    }
    void helper(vector<string> & res, string &str, int left, int right){
        if(left == 0 && right == 0){
            res.push_back(str);
            return;
        }
        str.push_back('(');
        if(left > 0) helper(res, str, left - 1, right);
        str.pop_back();
        
        str.push_back(')');
        if(right > left) helper(res, str, left, right - 1);
        str.pop_back();
    }
};