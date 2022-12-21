#include <bits/stdc++.h>
using namespace std;
double approximatepi(int n){
    double s = 1;   
    double pi = 3;
    for(double i = 2; i <= n*2; i += 2){
         pi = pi + s * (4 / (i * (i + 1) * (i + 2)));
         s = -s;
   }
   return pi;
}
int main() {

   double n;
   printf("\nEnter the number of iterations: ");
   cin>>n; 
   double pi = approximatepi(n);
   printf("\nAproximated value of PI = %1.8lf\n", pi); 
}
