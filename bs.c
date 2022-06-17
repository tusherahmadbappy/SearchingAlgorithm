#include<stdio.h>
int main()
{
    char opt;
    int arr[20],start,end,middle,n,i,item;

    printf ("\nHow many elements you want to enter in the array : ");
    scanf ("%d",&n);
    for(i=0; i < n; i++)
    {
        printf ("\nEnter element %d : ",i+1);
        scanf ("%d",&arr[i]);
    }
    printf ("\n\nPress any key to continue...");

    do
    {

        printf ("\nEnter the element to be searched : ");
        scanf ("%d",&item);
        start=0;
        end=n - 1;
        middle=(start + end)/2;

    while(item != arr[middle] && start <= end)
    {
    if (item > arr[middle])
        start=middle+1;
        else
        end=middle-1;
        middle=(start+end)/2;
    }
    if (item==arr[middle])
        printf("\n%d found at position %d\n",item,middle + 1);
    if (start>end)
        printf ("\n%d not found in array\n",item);

    printf ("\n\nPree (Y/y) to continue : ");
    fflush(stdin);
    scanf ("%c",&opt);

    }while(opt == 'Y' || opt == 'y');


    return 0;
}