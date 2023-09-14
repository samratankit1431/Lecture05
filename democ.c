#include(stdio.h)
int main()
{
    int arr[];
    int size;
    printf("enter the size");
    scznf("%d",&size);
    int i;
    for (i=0;i<size;i++)
    {
        printf("enter the numbers of a array");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}