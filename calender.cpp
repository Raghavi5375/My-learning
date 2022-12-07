#include<bits/stdc++.h>
using namespace std;
int main(){
	string v;
	cout<<"Month : ";
	cin>>v;
	for (int i = 0; i < v.length(); i++)
  	{
  		v[i] = tolower(v[i]);
  	}
	if(v == "january"){
		cout<<"31 days"<<"\n";
	}
	else if(v == "february"){
		cout<<"28 or 29 days"<<"\n";
	}
	else if(v == "march"){
		cout<<"31 days"<<"\n";
	}
	else if(v == "april"){
		cout<<"30 days"<<"\n";
	}
	else if(v == "may"){
		cout<<"31 days"<<"\n";
	}
	else if(v == "june"){
		cout<<"30 days"<<"\n";
	}
	else if(v == "july"){
		cout<<"31 days"<<"\n";
	}
	else if(v == "august"){
		cout<<"31 days"<<"\n";
	}
	else if(v == "september"){
		cout<<"30 days"<<"\n";
	}
	else if(v == "october"){
		cout<<"31 days"<<"\n";
	}
	else if(v == "november"){
		cout<<"30 days"<<"\n";
	}
	else if(v == "december"){
		cout<<"31 days"<<"\n";
	}
	
}
