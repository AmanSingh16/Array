#include<stdio.h>
void input(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }
    printf("\n");
}
void maxmin(int a[],int n)
{
    int i,big,sml;
    big=sml=a[0];
    for(i=0;i<(n-1);i++)
    {
        if(big<a[i+1])
        {
            big=a[i+1];
        }
        if(sml>a[i+1])
        {
            sml=a[i+1];
        }
    }
    printf("The maximun element = %d \n The minimum element = %d\n",big,sml);
}
void rev(int a[],int n)
{

}
int main()
{
    int size;int arr[10];
    printf("Enter the number of elements in a Array : \n");
    scanf("%d",&size);
    printf("Enter the elements in the Array\n");
    input(arr,size);
    maxmin(arr,size);
    //printf("The reverse of the Array is : \n");
    //rev(arr,size);
    return 0;
}