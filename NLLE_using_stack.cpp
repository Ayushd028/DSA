#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int arr[]={7,21,9,5,55};
    stack<int> st;
    st.push(55);
for(int i=3;i>=0; i--)
{
    if(!st.empty() && arr[i]>st.top())
    {
        cout<<st.top()<<"------> "<<arr[i]<<endl;
        st.pop();
    }
    st.push(arr[i]);
}
while(!st.empty())
{
    cout<<st.top()<<"------> "<< -1<<endl;
    st.pop();
}
return 0;
}