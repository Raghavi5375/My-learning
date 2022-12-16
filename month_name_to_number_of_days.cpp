#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cout<<"Enter month : ";
	cin>>s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	if(s == "january"){
		cout<<"31 days"<<"\n";
	}
	else if(s == "february"){
		cout<<"28 or 29 days"<<"\n";
	}
	else if(s == "march"){
		cout<<"31 days"<<"\n";
	}
	else if(s == "april"){
		cout<<"30 days"<<"\n";
	}
	else if(s == "may"){
		cout<<"31 days"<<"\n";
	}
	else if(s == "june"){
		cout<<"30 days"<<"\n";
	}
	else if(s == "july"){
		cout<<"31 days"<<"\n";
	}
	else if(s == "august"){
		cout<<"31 days"<<"\n";
	}
	else if(s == "september"){
		cout<<"30 days"<<"\n";
	}
	else if(s == "october"){
		cout<<"31 days"<<"\n";
	}
	else if(s == "november"){
		cout<<"30 days"<<"\n";
	}
	else if(s == "december"){
		cout<<"31 days"<<"\n";
	}
}
