/*Reverse Numbers: Write a program that reads N integers from user and 
print them in reverse order.*/

#include <iostream>
using namespace std;
int main()
{
   int i,n,a[100];
   cout<<"Input the number of elements to store in the array :";
   cin>>n;
   
   cout<<"Input elements in the array :\n";
   for(i=0;i<n;i++)
      {
	  cout<<"element - "<<  i<<" : ";
	  cin>>a[i];
	  }
      
   printf("\nThe values store into the array are : \n");
   for(i=0;i<n;i++)
     {
	   cout<<a[i]<<" ";
	 }
 
   printf("\n\nThe values store into the array in reverse are :\n");
   for(i=n-1;i>=0;i--)
      {
	   cout<<a[i]<<" ";
	  }
   printf("\n\n");
} 
