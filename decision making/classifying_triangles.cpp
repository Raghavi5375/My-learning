#include<bits/stdc++.h>
using namespace std;
int main(){
	int s1, s2, s3;
	cout<<"Side 1 : ";
	cin>>s1;
	cout<<"\n"<<"Side 2 : ";
	cin>>s2;
	cout<<"\n"<<"Side 3 : ";
	cin>>s3;
	if(s1 == s2 && s1 == s3){
		cout<<"\n"<<"Equilateral triangle !!"<<"\n";
	}
	else if(s1 == s2 || s2 == s3 || s3 == s1){
		cout<<"\n"<<"Isosceles triangle !!"<<"\n";
	}
	else{
		cout<<"\n"<<"Scalene triangle !!"<<"\n";
	}
}
