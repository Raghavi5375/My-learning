#include<bits/stdc++.h>
using namespace std;
int isInteger(string s){
	for(int i = 0 ; i < s.length() ; i++){
		if(s[i] == '+' || s[i] == '-'){
			i++;
		}
		else if(s[i] >= '0' && s[i] <= '9'){
			i++;
		}
		if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
			return false;
			break;
		}else{
			return true;
		}
	}
}

using namespace std;
int main(){
	string s;
	cout<<"Enter the string : ";
	cin>>s;
	int res = isInteger(s);
	if(res == true){
		cout<<"Valid integer"<<"\n";
	}
	else{
		cout<<"Not valid"<<"\n";
	}
}
