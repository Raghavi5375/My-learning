#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, sum = 0, m;
	cout<<"Number(only 4 digit number) : ";
	cin>>n;
	while(n>0)    
	{    
		m=n%10;    
		sum=sum+m;    
		n=n/10;    
	}    
	cout<<sum<<"\n";
}
