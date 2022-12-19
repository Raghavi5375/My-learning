#include<bits/stdc++.h>
using namespace std;
int checkPassword(string s1){
	int upper = 0, lower = 0, num = 0;
	if(s1.length() >= 8){
		for(int i = 0 ; i < s1.length() ; i++){
			if (s1[i] >= 'a' && s1[i] <= 'z'){
				lower++;
			}
			else if(s1[i] >= 'A' && s1[i] <= 'Z'){
				upper++;
			}
			else if(s1[i] >= '0' && s1[i] <= '9'){
				num++;
			}
     	}
	}
	if(lower >= 1 && upper >= 1 && num >= 1){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	string s;
	cout<<"Enter password : ";
	cin>>s;
	if(checkPassword(s)){
		cout<<"good"<<"\n";
	}
	else{
		cout<<"can be more unique"<<"\n";
	}
}
