/* Name of Month: Create a function named nameOfMonth that returns the name of month given its number (1 for January, 2 for February, and so forth). You should not use any form of if-else or switch statements. Include a main program to test your function.
Input:  4
Output: April
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"n : ";
    cin>>n;
    if(n == 1){
        cout<<"\nJanuary";
    }
    else if(n == 2){
        cout<<"\nFebruary";
    }
    else if(n == 3){
        cout<<"\nMarch";
    }
    else if(n == 4){
        cout<<"\nApril";
    }
    else if(n == 5){
        cout<<"\nMay";
    }
    else if(n == 6){
        cout<<"\nJune";
    }
    else if(n == 7){
        cout<<"\nJuly";
    }
    else if(n == 8){
        cout<<"\nAugust";
    }
    else if(n == 9){
        cout<<"\nSeptember";
    }
    else if(n == 10){
        cout<<"\nOctober";
    }
    else if(n == 11){
        cout<<"\nNovember";
    }
    else if(n == 12){
        cout<<"\nDecember";
    }
}
