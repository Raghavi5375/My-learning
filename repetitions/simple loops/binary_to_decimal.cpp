#include <iostream>
#include <string>
using namespace std;
int main()
{
	string num;
	cout<<"Enter the binary value to convert : ";
	cin>>num;
	int dec_value = 0;

	// Initializing base value to 1, i.e 2^0
	int base = 1;

	int len = num.length();
	for (int i = len - 1; i >= 0; i--) {
		if (num[i] == '1')
			dec_value += base;
		base = base * 2;
	}
	cout << dec_value << endl;
}
