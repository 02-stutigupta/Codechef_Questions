#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a,b;
	cin>>n;
	while(n--)
	{
	    cin>>a>>b;
	    if(a*15>=2*b) cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}
