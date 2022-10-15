#include<iostream>
using namespace std;

void insertion(int *arr,int n)
{
    //base case
    if(n<=1)
    return ;
    //processing
    insertion(arr, n-1);

   int i = arr[n-1];
   int j =n-2;
   while (j>=0 && arr[j]>i)
   {

       arr[j+1] = arr[j];
       j = j-1;
       
   }
   arr[j+1] = i;
}

int main()
{
    int arr[5] = {2, 5, 8, 7, 3};
    int n =5;
    insertion(arr, 5);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
