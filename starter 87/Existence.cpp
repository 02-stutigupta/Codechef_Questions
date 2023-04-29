#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long  i,x,y,res1,res2;
	
	cin>>i;
	while(i--)
	{
	    cin>>x>>y;
	    res1 = x*x*x*x + 4*y*y;
	    res2 = 4*x*x*y;
	    
	    if(res1==res2) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
