#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<char> st;
    char ch[100];
    cout<<"Provide an Expression"<<endl;
    cin>>ch;
    for(int i=0; i<100; i++)
    {
        if(ch[i] == '(')
        {
            st.push(ch[i]);
        }
        else if(ch[i] == ')')
        {
            if(!st.empty())
            {
                st.pop();
            }
            
        }
        
    }
    cout<<"Expresssion is Unbalanced"<<endl;
    return 0;
}