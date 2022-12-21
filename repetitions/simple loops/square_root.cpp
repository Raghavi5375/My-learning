#include <bits/stdc++.h>
using namespace std;

int main()
{
	double n;
	cout<<"Enter the value of n : ";
	cin>>n;
	float l = 0.00001;
	
	double x = n;

	double root;

	int count = 0;

	while (1) {
		count++;

		root = 0.5 * (x + (n / x));

		if (abs(root - x) < l)
			break;

		x = root;
	}

	cout << root;

	return 0;
}

