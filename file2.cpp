#include<iostream>
using namespace std;
int main()
{
  int arr[45]={1,2,3,4,5,6};
  int n;
  int pos;
  int i;
  cout<<"Current array is :"
    for(i=0;i<=5;i++)
    {
      cout<<arr[i];
    }
  cout<<"Enter the position and number you want :";
  cin>>pos>>n;
  for(i=5;i>=n;i--)
  {
    arr[i+1]=arr[i];
  }
  arr[pos]=arr[i];
  cout<<"New array :";
  for(i=0;i<=6;i++)
  {
    cout<<arr[i];
  }
  return 0;
}
