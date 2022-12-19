#include<bits/stdc++.h>
using namespace std;
int main(){
	char val;
	cout<<"Letter : ";
	cin>>val;
	if(val == 'a' || val == 'e' || val == 'i' || val == 'o' || val == 'u' || val == 'A' || val == 'E' || val == 'I' || val == 'O' || val == 'U'){
		cout<<"Vowel!!"<<"\n";
	}
	else if(val == 'y'){
		cout<<"Sometimes y is vowel and sometimes it is consonent"<<"\n";
	}
	else{
		cout<<"Consonent"<<"\n";
	}
}
