#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,n;
	cin>>n;
	while(n--)
	{
	    cin>>i;
	    if(i%3==0) cout<<"yes\n";
	    else cout<<"no\n";
	}
	return 0;
}
