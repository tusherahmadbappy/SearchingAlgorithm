#include<iostream>
using namespace std;

void linear_search(int arr[],int num)
{
    int i=1,item;
    cout<<"how value search you want: ";
    cin>>item;
    while(i<=num)
    {
        if(arr[i]==item)
        {
            cout<<"Item is found at index: "<<i<<endl;

            break;
        }
        i++;
        if(i==num+1)
        {
        cout<<"Item is not found at index: "<<i<<endl;
        }
    }
}


int main()
{
    int arr[50],num,i;
    cout<<"Enter the total number of array: ";
    cin>>num;

    for(i=1;i<=num;i++)
    {
        cout<<"Number of index[ "<<i<<" ] is: ";
        cin>>arr[i];
    }

    linear_search(arr,num);
}