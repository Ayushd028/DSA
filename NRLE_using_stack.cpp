#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {4,5,2,25,11};
     stack<int> st;
        for(int i = 4; i>=0; i--)
        {
            if(st.empty())
            {
                st.push(arr[i]);
                cout<<st.top()<<" "<<"------>"<<" "<< -1<< endl;
            }
            else{
                if(arr[i]>st.top())
                {
                    //cout<<st.top();
                    cout<<arr[i]<<" "<<"------>"<<" "<< st.top()<< endl;
                    st.pop();
                    st.push(arr[i]);
                }
                else
                {
                    cout<<arr[i]<<" "<<"------>"<<" "<< st.top()<< endl;
                    st.pop();
                    st.push(arr[i]);
                }
            }
        }
    return 0;
}