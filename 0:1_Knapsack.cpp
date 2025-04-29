#include<iostream>
using namespace std;
int knapsack(int weight[], int profit[], int W, int n)
{
    if(W==0 || n==0)
    return 0;
    else if(weight[n-1]>n)
    return knapsack(weight,profit,W,n-1);
    else
    return max(knapsack(weight,profit,W,n-1),profit[n-1] + knapsack(weight,profit,W-weight[n-1],n-1));
}
int main()
{
    int n, res, W=7;
    cout<<"Provide the total Number of Elements: ";
    cin>>n;
    int weight[n], profit[n];
    cout<<"Enter "<<n<<" weights: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>weight[i];
    }
    cout<<"Enter "<<n<<" profits: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>profit[i];
    }
    res=knapsack(weight, profit, W, n);
    cout<<"Maximum profit: "<<res<<endl;
    return 0;
}
