#include "array.h"

void bubble(int a[], int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
}

void selection(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int p=i;
        for(int j=i+1;j<n;j++)
            if(a[j]<a[p])
                p=j;

        int t=a[i];
        a[i]=a[p];
        a[p]=t;
    }
}

void insertion(int a[], int n)
{
    for(int i=1;i<n;i++)
    {
        int x=a[i], j=i-1;

        while(j>=0 && a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=x;
    }
}

void quick(int a[], int low, int high)
{
    if(low<high)
    {
        int p=a[high];
        int i=low-1;

        for(int j=low;j<high;j++)
            if(a[j]<p)
            {
                i++;
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }

        int t=a[i+1];
        a[i+1]=a[high];
        a[high]=t;

        quick(a,low,i);
        quick(a,i+2,high);
    }
}

void merge(int a[], int low, int high)
{
    if(low>=high) return;

    int mid=(low+high)/2;

    merge(a,low,mid);
    merge(a,mid+1,high);

    int i=low,j=mid+1,k=0,b[100];

    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
    }

    while(i<=mid) b[k++]=a[i++];
    while(j<=high) b[k++]=a[j++];

    for(i=low,k=0;i<=high;i++,k++)
        a[i]=b[k];
}

int linear(int a[], int n, int x)
{
    for(int i=0;i<n;i++)
        if(a[i]==x)
            return i;

    return -1;
}

int binary(int a[], int n, int x)
{
    int low=0,high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(a[mid]==x) return mid;
        if(a[mid]<x) low=mid+1;
        else high=mid-1;
    }

    return -1;
}