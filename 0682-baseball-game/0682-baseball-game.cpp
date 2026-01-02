class Solution {
public:
    int calPoints(vector<string>& operations) {
          int ans=0;
        int n=operations.size();
        stack<int> st;
        for(int i=0;i<n;i++)
        {   
            if(operations[i] == "+")
            {
               int a=st.top();
               st.pop();
               int b=st.top();
               st.pop();
               ans=ans+a+b;
               st.push(b);
               st.push(a);
               st.push(a+b);
            }
            else if(operations[i] == "D")
            {
                if(!st.empty())
                {
                    ans+=(2*st.top());
                    st.push(2*st.top());
                }
            }
            else if (operations[i]=="C")
            {
                if(!st.empty())
                {
                   ans-=st.top();
                    st.pop();
                    
                } 
            }
            else
            {
                st.push(stoi(operations[i]));
                 ans += stoi(operations[i]);  
            }
        }
        return ans; 
    }
};