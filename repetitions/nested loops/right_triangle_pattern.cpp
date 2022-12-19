#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"n : ";
	cin>>n;
	cout<<"\n";
	for(int i=1; i<=n; i++) //first column
    {
        for(int j=1; j<=i; j++) //printing * , if i = 1 then * , if i = 2 then * *
        {
            printf("*");
        }
        printf("\n");
    }

}
