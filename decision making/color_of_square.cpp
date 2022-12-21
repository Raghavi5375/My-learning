#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cout<<"Enter a letter from (a to h) and a number from (1 to 8) to know the color in chess board : ";
	cin>>s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	if (s[0] == 'a' || s[0] == 'c' || s[0] == 'e' || s[0] == 'g')
	{
		if (s[1] == '1' || s[1] == '3' || s[1] == '5' || s[1] == '7')
			cout << "Black square";
		else
			cout << "White square";
	}
	else
	{
		if (s[1] == '1' || s[1] == '3' || s[1] == '5' || s[1] == '7')
			cout << "white square";
		else
			cout << "Black square";
	}
}
