#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cout << "enter the size of the array: ";
    cin >> N;
    int *A = new int[N];
    for(int i =0;i<N;i++)
    {
      cout << "enter " <<i<<" element of the array: ";
      cin>>A[i];
    }
    // Finding the element closest to zero
    int elem_index=0;
    for(int i =0;i<N;i++)
    {
      if ((A[i] >= 0 && A[i]<=A[elem_index]) || (A[i]< 0 && A[i]>A[elem_index]))
        {
        elem_index = i;
        }
    }
    cout<<"element closest to zero A["<<elem_index<<"]="<<A[elem_index];
    delete[] A;
    A= nullptr;
    return 0;
}
