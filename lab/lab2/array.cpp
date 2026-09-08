#include "array.h"

template <class T>
MyArray<T>::MyArray()
{
    n = 0;
}

template <class T>
void MyArray<T>::create()
{
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];
}

template <class T>
void MyArray<T>::insert_begin(T x)
{
    for(int i = n; i > 0; i--)
        a[i] = a[i - 1];

    a[0] = x;
    n++;
}

template <class T>
void MyArray<T>::insert_end(T x)
{
    a[n] = x;
    n++;
}

template <class T>
void MyArray<T>::insert_pos(int p, T x)
{
    for(int i = n; i > p; i--)
        a[i] = a[i - 1];

    a[p] = x;
    n++;
}

template <class T>
void MyArray<T>::delete_begin()
{
    for(int i = 0; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;
}

template <class T>
void MyArray<T>::delete_end()
{
    n--;
}

template <class T>
void MyArray<T>::delete_pos(int p)
{
    for(int i = p; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;
}

template <class T>
void MyArray<T>::display()
{
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}