# include <iostream>
# include <stack>
using namespace std;

class ValidParanthesis
{
    public:
    bool isValid(string S);

};

bool ValidParanthesis :: isValid(string S)
{
    stack<char> st;

    for(char ch : S)
    {
        if(ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            char top = st.top();
            st.pop();

            if((ch == ')' && top != '(') || (ch == ']' && top != '[') || (ch == '}' && top != '{'))
            {
                return false;
            }
            
        }
    }

    return st.empty();
    
}

int main()
{
    string Str;
    bool bRet = false;

    cout << "Enter the string: " << endl;
    cin >> Str;

    ValidParanthesis *obj = new ValidParanthesis();

    bRet = obj->isValid(Str);

    if (bRet == true)
    {
        cout << "valid Parenthesis" << endl;
    }

    else
    {
        cout << "Not Valid Parenthesis" << endl;
    }
    


    return 0;
}