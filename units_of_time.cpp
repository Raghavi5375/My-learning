#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
	int sec, d, h, m, s;
	cout<<"Seconds : ";
	cin>>sec;
	
	d = (sec/86400);
	
	h = (sec - (86400*d))/3600; 
	
	m = (sec -(3600*h))/60;
	
	s = (sec -(3600*h)-(m*60));
	
	cout<<d<<":"<<h<<":"<<m<<":"<<s<<"\n";
}
