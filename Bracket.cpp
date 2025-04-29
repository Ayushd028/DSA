#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<char> st; 
    int n;
    char ch[n];
    cout<<"Provide Balanced Expression"<<endl;
    cin>>ch;
for(int i=0; i<=n ; i++)
{
    if(ch[i] != ')' )
    {
        st.push(ch[i]);
    }
    else //if(ch[i] == ')')//
    {
        if(st.top() == '('){
            cout<<"Duplicate Bracket Exist"<<endl;
            break;
        }
    }   
}
while(st.top() != '(')
{
    st.pop();
}
cout<<"No Duplicate Bracket Exist"<<endl;
    return 0;
}