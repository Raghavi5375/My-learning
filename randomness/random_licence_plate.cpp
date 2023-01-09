#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

int randomlicenceplate(int n){
    char alpha[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g','h', 'i', 'j', 'k', 'l', 'm', 'n','o', 'p', 'q', 'r', 's', 't', 'u','v', 'w', 'x', 'y', 'z'};
    string result = "";
    if(n == 0){
        for (int i = 0; i<3; i++)
            result = result + alpha[rand() % 26];
        cout<<result<<100 + rand()%999<<"\n";
    }
    else if(n == 1){
        for (int i = 0; i<3; i++)
            result = result + alpha[rand() % 26];
        cout<<1000 + rand()%999<<result<<"\n";
    }
}

int main()
{
    srand(time(NULL));
    int n = rand() % 2;
    randomlicenceplate(n);
	return 0;
}

