#include<iostream>
using namespace std;

int binary_search(int arr[],int l,int num,int value)
{
    int low=l,high=num,item=value,mid;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==item)
        {
           return mid;
        }
        else if(item>arr[mid])
        {
            low=mid+1;
        }
        else
        {
             high=mid-1;
        }
    }
    return -1;

}


int main()
{
    int arr[50],num,i,size,low,high,item,temp,j;
    cout<<"Enter the total number of array: ";
    cin>>num;

    for(i=0;i<num;i++)
    {
        cout<<"Number of index[ "<<i<<" ] is: ";
        cin>>arr[i];
    }
    for(int i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }


    cout<<"how value search you want: ";
    cin>>item;

   int result= binary_search(arr,0,num,item);

   if(result==-1)
   {
    cout<<"Item is not found: "<<endl;
   }
   else
   {
     cout<<"Item is found: "<<result<<endl;
   }

   return 0;

}
