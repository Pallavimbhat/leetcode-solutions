class Solution {
public:

    vector<string> p(int k,vector<string> &res,string &s,int o,int c){
        if(c==k and o==k){
            res.push_back(s);
            return res;
        }

        if(o<k){
            s.push_back('(');
            p(k,res,s,o+1,c);
            s.pop_back();
        }
        if(c<k && c<o){
            s.push_back(')');
            p(k,res,s,o,c+1);
            s.pop_back();
        }
        return res;

    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string s;
        return p(n,res,s,0,0);
    }
};