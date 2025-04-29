#include<iostream>
#include<stack>
using namespace std;
int main()
{
stack <int> st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
st.push(60);
st.push(70);
int n = 60;
while (!st.empty())
{
    if(st.top() == n)
    {
        cout<<"Element Found"<<endl;
        break;
    }
    else
    {
        st.pop();
    } 
}
if(st.empty())
{
    cout<<"Element not Found"<<endl;
}
return 0;
}
