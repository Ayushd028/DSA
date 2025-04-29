#include<iostream>
using namespace std;
int main()
{
    int arr[9]={1,2,3,1,4,5,2,3,6};
    int max=0;
    
    for(int i =0; i<=6; i++)
    {
        for( int j = i; j<i+3; j++)
        {
            if(max<arr[j])
            {
                max=arr[j];
            }
        }
        cout<<max<<endl;
    }
return 0;
}
