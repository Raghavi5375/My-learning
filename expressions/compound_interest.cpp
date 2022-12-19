#include<bits/stdc++.h>
using namespace std;
int main(){
	double amount, cinterest;
	cout<<"Amount of money deposited = ";
	cin>>amount;
	for(int i = 1 ; i <= 3 ; i++){
		cinterest = 0.04 * amount;
		amount = cinterest + amount;
		cout<<"amount of savings in "<<i<<" year is = "<<amount<<"\n";
	}
}
