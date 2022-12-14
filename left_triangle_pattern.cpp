#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"n : ";
	cin>>n;
	cout<<"\n";
	for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            printf(" ");
        }

        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
