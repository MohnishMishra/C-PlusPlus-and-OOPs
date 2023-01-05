#include<iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	     int s=0;
	     int n,x;
	     cin>>n>>x;
         int a[n],b[n];
	     for(int i=0;i<n;i++){
	         cin>>a[i];
	     }
	     for(int k=0;k<n;k++){
	         cin>>b[k];
	     }
	     for(int j=0;j<n;j++){
	         if(a[j]>=x){
	             s=s+b[j];
	         }
	     }
	     cout<<s<<endl;
	}
	return 0;
} 