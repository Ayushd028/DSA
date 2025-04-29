#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;
    int arr[6] = {20,5,75,55,70,65};
    int count = 0;
    for(int i=6; i<=0; i--)
    {
        if(st.empty())
    {
        count = 1;
        st.push(arr[i]);
        cout<<st.top()<<" "<<"---->"<<" "<<count<<endl;
    }
        else if(st.top()>arr[i])
        {
            st.push(arr[i]);
            cout<<arr[i]<<" "<<"---->"<<" "<<count<<endl;
        }
       else if (st.top()<arr[i])
       {
        count = count + 1;
        cout<<arr[i]<<" "<<"---->"<<" "<<count<<endl;
        st.pop();
        st.push(arr[i]);
       }
    }
    return 0;
}