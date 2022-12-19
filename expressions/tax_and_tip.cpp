#include<bits/stdc++.h>
using namespace std;
int main(){
	double cost;
	cout<<"cost of your meal : ";
	cin>>cost;
	double tax, tip;
	tip = 0.05 * cost;
	tax = (tip + cost) * 0.18;
	cout<<"Grand total = "<<cost + tax + tip<<"\n";
}
