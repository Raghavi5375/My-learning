#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cout<<"Enter the string : ";
	cin>>s;
	int vowels = 0,cons = 0;
	for(int i = 0 ; i < s.length() ; i++){
		if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
		      vowels++;
        else
             cons++;
	}
	cout<<"Vowels are : "<<vowels<<"\n"<<"Consonents are : "<<cons<<"\n";
}
