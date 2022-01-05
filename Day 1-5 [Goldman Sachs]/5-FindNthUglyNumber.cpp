//#6Companies30Days Challenge GoldmanSachs-5 (FindNthUglyNumber)

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
    ull getNthUglyNo(int n) {
    // code here
    ull arr[n];
    ull a=0,b=0,c=0, c2=2,c3=3,c5=5,next=1;
    arr[0]=1;
    for(int i=1;i<n;i++){
        next=min(min(c2,c3),c5);
        arr[i]=next;
        if(next==c2){
            a+=1;
            c2=arr[a]*2;
        }
        if(next==c3){
            b+=1;
            c3=arr[b]*3;
        }
        if(next==c5){
            c+=1;
            c5=arr[c]*5;
        }
    }
    return next;
}
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
