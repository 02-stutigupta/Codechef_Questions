#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,a;
	cin>>i;
	while(i--)
	{
	    cin>>a;
	    if(a*4>1000) cout<<"NO"<<endl;
	    else if(a*4<=1000) cout<<"YES"<<endl;
	   
	    else cout<<"NO"<<endl;
	}
	return 0;
}
