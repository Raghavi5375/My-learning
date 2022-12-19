#include<bits/stdc++.h>
using namespace std;
int medianOfThree(int a, int b, int c){
	if((a > b && a < c) || (a < b && a > c)){
		return a;
	}
	else if((b > a && b < c) || (b < a && b > c)){
		return b;
	}
	else{
		return c;
	}
}
int main(){
	int a, b, c;
	cout<<"a : ";
	cin>>a;
	cout<<"b : ";
	cin>>b;
	cout<<"c : ";
	cin>>c;
	int result = medianOfThree(a, b, c);
	cout<<result;
}
