#include <bits/stdc++.h>
using namespace std;

bool isequal(string str){
	int n = str.length();

	int num = 0, x = 1, i = n - 1;
	for (i = n - 1; i >= 0; i--) {
		if ('0' <= str[i] && str[i] <= '9') {
			num = (str[i] - '0') * x + num;
			x = x * 10;
			if(num>=n)
				//return false;
				return  str[i - num];
		}
		else
			break;
	}

	return num == i + 1;
}

int main()
{
	string str;
	cout<<"Enter the string : ";
	cin>>str;
	//isequal(str) ? cout << "Yes" : cout << "No";
	cout<<isequal(str);
	return 0;
}

