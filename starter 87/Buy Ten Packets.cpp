#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,a,b;
	cin>>i;
	while(i--)
	{
	    cin>>a>>b;
	    cout<<min(2*b+a, min(5*a, b+3*a))<<endl;
	}
	return 0;
}
