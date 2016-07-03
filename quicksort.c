#include<stdio.h>
void swap(int *aa,int *bb)
{
    int c=*aa;
    *aa=*bb;
    *bb=c;
}
int part(int a[],int l,int r)
{
    int i;
    int pivot=a[l];
    int wall=r+1;
    for(i=r;i>l;i--)
    {
        if(a[i]>=pivot)
        {
            swap(&a[i],&a[wall-1]);
            wall--;
        }
    }
    swap(&a[l],&a[wall-1]);
    return wall-1;
}
void quicksort(int a[],int l,int r)
{

    if(l<r)
    {
        int pivotp=part(a,l,r);
        quicksort(a,l,pivotp-1);
        quicksort(a,pivotp+1,r);
    }
}
int main()
{

int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
quicksort(a,0,n-1);
for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
