#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int r,ne,i,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>r>>ne;
	    if(r<ne) cout<<"REPAIR\n";
	    else if(r>ne) cout<<"NEW PHONE\n";
	    else if(r==ne) cout<<"ANY\n";
	}
	return 0;
}
