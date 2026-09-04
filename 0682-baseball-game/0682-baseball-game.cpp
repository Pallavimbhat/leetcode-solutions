class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0;
        stack<int>st;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="D"){
                int x=st.top();
                x*=2;
                st.push(x);
                sum+=x;
            }
            else if(operations[i]=="C"){
                int x=st.top();
                st.pop();
                sum-=x;
            }
            else if(operations[i]=="+"){
                int x=st.top();
                st.pop();
                int y=st.top();
                st.push(x);
                int s=x+y;
                st.push(s);
                sum+=s;

            }
            else {
                sum+=stoi(operations[i]);
                st.push(stoi(operations[i]));
            }
        }
        return sum;
    }
};