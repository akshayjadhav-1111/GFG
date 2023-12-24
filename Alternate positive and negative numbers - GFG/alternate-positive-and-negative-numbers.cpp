//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	   int temp[n];
	   int pos=0,neg=0;
	   int i=0;
	   
	   while(pos<n||neg<n){
	       
	       
	       while(arr[pos]<0 &&pos<n){
	           pos++;
	            
	       }
	       if(pos<n){
	           
	       
	       temp[i]=arr[pos];
	       pos++;
	       i++;
	       }
	       
	       while(arr[neg]>=0  ){
	           neg++;
	       }
	       
	      if(neg <n){
	       temp[i]=arr[neg];
	       neg++;
	       i++;
	       
	      }
	   }
	   for(int i =0;i<n;i++){
	       arr[i]=temp[i];
	   }
	   
	   
	   
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends