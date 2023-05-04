#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,n;
	cin>>i;
	while(i--)
	{
	    cin>>n;
	    if (n>10) cout<<"NO\n";
	    else if(n<=10) cout<<"Yes\n";
	}
	return 0;
}
