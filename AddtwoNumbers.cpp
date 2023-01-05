#include <iostream>
using namespace std;

int main() 
{
    int x,y;
    int n;
    cin>>n;
    if (1<=n<=100)
    {
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            if (1 <= x < y <= 12)
            {
                cout<<(y-x)<<endl;
            }
        }
    }
    
    
	return 0;
}
