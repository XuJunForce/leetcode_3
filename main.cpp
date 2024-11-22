class Solution {
public:
    bool isValid(string s) {
        stack<char> res;
        for(int i =0;i<s.length();i++){
            if(s[i]==')'){
                if(!res.empty()&&res.top()=='('){
                    res.pop();
                }
                else{
                    return false;
                }
            }
            else if(!res.empty()&s[i]==']'){
                if(res.top()=='['){
                    res.pop();
                }
                else{
                    return false;
                }
            }
            else if(!res.empty()&s[i]=='}'){
                if(res.top()=='{'){
                    res.pop();
                }
                else{
                    return false;
                }
            }
            else{
                res.push(s[i]);
            }
            
        }

        return res.empty()?true:false;
    }
};
