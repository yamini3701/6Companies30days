//#6Companies30Days Challenge Adobe-12 (Leaders in an Array)

// { Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
    
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> ans;
        int k = a[n-1];
        for(int i=n-1; i>=0; i--){
            if(a[i]>=k){
                ans.push_back(a[i]);
                k=a[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

/*
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> ans;
        for(int i=0; i<n-1; i++)
        {  
            int j;
            for(j=i+1 ; j<n; j++){
                if(a[i] <= a[j]){
                    break;
                }
            }
            if(j==n){
                ans.push_back(a[i]);
            }
        }
        ans.push_back(a[n-1]);
        return ans;
        
    }
};

*/

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends
