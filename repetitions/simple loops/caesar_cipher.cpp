#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cout<<"Enter the message : ";
	cin>>s;
	for(int i = 0 ; i < s.length() ; i++){
		s[i] = s[i] + 3;
		if(s[i] > 'z'){
			s[i] = s[i] - 'z' + 'a' - 1;
		}
		else if(s[i] > 'Z'){
			s[i] = s[i] - 'Z' + 'A' - 1;
		}
	}
	cout<<s;
}
