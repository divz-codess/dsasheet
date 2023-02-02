//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{   vector<int> ans;
int max=-1,min=-1,count=0;
    // code here
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x&&count==0)
       {count++;
        min=i;
        max=i;}
        else if(arr[i]==x&&count!=0)
        {
            max=i;
        }
    }
    ans.push_back(min);
    ans.push_back(max);
    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends