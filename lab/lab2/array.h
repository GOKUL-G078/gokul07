#include <iostream>
using namespace std;

template <class T>
class MyArray
{
    T a[100];
    int n;

public:
    MyArray();

    void create();
    void insert_begin(T);
    void insert_end(T);
    void insert_pos(int, T);

    void delete_begin();
    void delete_end();
    void delete_pos(int);

    void display();
};