class Solution {
public:
    int calPoints(vector<string>& a) {
        stack<int> st;
        int sum = 0;

        for(int i = 0; i < a.size(); i++) {

            if(a[i] == "+") {
                int x = st.top();
                st.pop();

                int y = st.top();

                st.push(x);
                st.push(x + y);
            }

            else if(a[i] == "D") {
                int x = st.top();
                st.push(2 * x);
            }

            else if(a[i] == "C") {
                st.pop();
            }

            else {
                st.push(stoi(a[i]));
            }
        }

        while(!st.empty()) {
            int temp = st.top();
            st.pop();
            sum += temp;
        }

        return sum;
    }
};