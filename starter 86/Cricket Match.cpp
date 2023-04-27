#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,n,a,b;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>a>>b;
	    if(b*36 < a) cout<<"NO"<<endl ;
	    else cout<<"Yes"<<endl;
	}
	return 0;
}
