#include<iostream>
#include<sstream>
#include<stack>
using namespace std;
bool isoperator(char c){
if(c=='(' || c =='*' ||  c =='+' || c =='-' || c =='/' || c =='^'){
return true;
}
else {
return false;
}
}
int main(){
    stack <int> st;
    char ar[1000];
    int size;
    cin>>size;
    cout<<"enter the expression in array"<<endl;
    for(int i=0; i<size; i++){
        cin>>ar[i];
    }
    for(int i=0; i<size; i++){
        cout<<ar[i];
    }
    cout<<endl;
    for(int i=0; i<size; i++){
        if(isoperator(ar[i])){
            st.push(ar[i]);
        }
        else if(ar[i]==')'){
            while(st.top()!='('){
            char ch=(char)st.top();
            cout<<ch;
            st.pop();
        }
        st.pop();
    }
        else{
            cout<<ar[i];
        }
       
    }
}