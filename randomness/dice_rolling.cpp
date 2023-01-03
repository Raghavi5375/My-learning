#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int rollDice(){
    int a, b, c, d, e, f;
    srand(time(0));
	for (int i = 0; i < 6; i++){
	    cout << rand() % 6<< " "<<"\n";
	    a = rand() % 6;
	    b = rand() % 6;
	    c = rand() % 6;
	    d = rand() % 6;
	    e = rand() % 6;
	    f = rand() % 6;
	}
	if(a == b == c == d == e == f){
	    cout<<"Yahoo"<<"\n";
	}
	else{
	    cout<<"Try again"<<"\n";
	}
}

int main()
{
    rollDice();
	return 0;
}

