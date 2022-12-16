#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int n;
	cout<<"Enter month and date : ";
	cin>>s>>n;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	if(s == "march" || s == "april" || s == "may"){
		if(s == "march"){
			if(n >= 20){
				cout<<"Spring"<<"\n";
			}
			else{
				cout<<"Winter"<<"\n";
			}
		}
		else{
			cout<<"Spring"<<"\n";
		}
	}
	else if(s == "june" || s == "july" || s == "august"){
		if(s == "june"){
			if(n >= 21){
				cout<<"Summer"<<"\n";
			}
			else{
				cout<<"Spring"<<"\n";
			}
		}
		else{
			cout<<"Summer"<<"\n";
		}
	}
	else if(s == "september" || s == "october" || s == "novermber"){
		if(s == "september"){
			if(n >= 22){
				cout<<"Fall"<<"\n";
			}
			else{
				cout<<"Summer"<<"\n";
			}
		}
		else{
			cout<<"Fall"<<"\n";
		}
	}
	else{
		cout<<"Winter"<<"\n";
	}
}
