#include<iostream>
using namespace std;
int sum(int arr[],int size)
{
    int arrsum=0;
    for (int i = 0; i < size; i++)
    {
       arrsum=arrsum + arr[i];
    }

    return arrsum;

}
int main(){
    int n;
    cout<<"size of aaray : ";
    cin>>n;
    int arr[50];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];

    }
    cout<<"sum of array is "<<sum(arr,n);
}