#include<iostream>
using namespace std;
int main()
{
  int arr[45]={1,2,3,4,5,6};
  int n;
  int pos;
  int i;
  cout<<"Current array is :";
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
 
#include <iostream>
using namespace std;
int main(){
   int a[10];
    int n;
    int num;
    int p=0;
    int i;
cout<< "Enter the size : ";
cin>> n;
cout << "Enter array elements:";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout<< "Enter the no. : ";
    cin>> num;
    for(i=0;i<n;i++){
        if (a[i]==num){
            a[i]=a[i+1];
            p=1;
        }
        else if(p>0){
            a[i]=a[i+1];
        }
    }
    cout<< "New array : ";
    for(i=0;i<n-p;i++)
        cout<< a[i]<< endl;
return 0;
}
#include <iostream>
using namespace std;
 
int main()
{
    int arr[] = { 6, 3, 5, 2, 8 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    int elem = 2;
 
    int i = 0;
    while (i < n)
    {
        if (arr[i] == elem) {
            break;
        }
        i++;
    }
 
    if (i < n)
    {
        cout << "Element " << elem << " is present at index " << i
             << " in the given array";
    }
    else {
        cout << "Element is not present in the given array";
    }
 
    return 0;
}
