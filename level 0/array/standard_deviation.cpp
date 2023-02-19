/* Standard Deviation: A standard deviation is a measure of how dispersed the data is in relation to the mean. Write a program that reads N integers from user and find the Standard Deviation of those N elements. The SD is defined as the square root of, the sum of the squared differences between each element and the mean divided by the number of elements.
Input:  6
	10 8 10 8 8 4
Output: 2.19 
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"n : ";
    cin>>n;
    float a[n];
    cout<<"\nEnter the elements : ";
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    float mean = 0.0;
    float sum = 0.0;
    for(int i = 0 ; i < n ; i++){
        sum += a[i];
    }
    mean = sum/n;
    float r;
    for(int i = 0 ; i < n ; i++){
        r += (a[i] - mean) * (a[i] - mean);
    }
    float res = 0.0;
    res = r/n;
    float var = sqrt(res);
    cout<<"Standard deviation is : "<<var<<"\n";
}
