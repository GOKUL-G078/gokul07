#include <iostream>
#include "array.h"

using namespace std;

int main()
{
    int a[100],n,ch,x,r;

    cout<<"Enter n: ";
    cin>>n;

    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<"\n1 Bubble";
    cout<<"\n2 Selection";
    cout<<"\n3 Insertion";
    cout<<"\n4 Quick";
    cout<<"\n5 Merge";
    cout<<"\n6 Linear Search";
    cout<<"\n7 Binary Search";

    cout<<"\nEnter choice: ";
    cin>>ch;

    if(ch==1) bubble(a,n);
    else if(ch==2) selection(a,n);
    else if(ch==3) insertion(a,n);
    else if(ch==4) quick(a,0,n-1);
    else if(ch==5) merge(a,0,n-1);

    else if(ch==6)
    {
        cout<<"Enter search element: ";
        cin>>x;

        r=linear(a,n,x);

        if(r==-1) cout<<"Not found";
        else cout<<"Found at "<<r+1;

        return 0;
    }

    else if(ch==7)
    {
        bubble(a,n);

        cout<<"Enter search element: ";
        cin>>x;

        r=binary(a,n,x);

        if(r==-1) cout<<"Not found";
        else cout<<"Found at "<<r+1;

        return 0;
    }

    cout<<"\nResult: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}