#include <iostream>
using namespace std;
int  nextPrime(int n)
{
    int i, j;
    for(i=n+1;;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }

        if(j==i)
        {
            return i;
            break;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int result = nextPrime(n);
    cout<<"\n"<<result<<"\n";
}
