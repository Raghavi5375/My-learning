#include<iostream>
using namespace std;
int isValidTriangle(int a, int b, int c){
	if((a + b) > c && (b + c) > a && (a + c) > b){
		return true;
	}
	else{
		return false;
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
	int result = isValidTriangle(a, b, c);
	if(result == true){
		cout<<"Valid :)"<<"\n";
	}
	else{
		cout<<"In valid !!"<<"\n";
	}
}
