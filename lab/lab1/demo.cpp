#include "array.cpp"

int main()
{
    MyArray<int> a;

    int choice, x, p;

    a.create();

    do
    {
        cout << "\n1. Insert Beginning";
        cout << "\n2. Insert Position";
        cout << "\n3. Insert End";
        cout << "\n4. Delete Beginning";
        cout << "\n5. Delete Position";
        cout << "\n6. Delete End";
        cout << "\n7. Display";
        cout << "\n8. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cin >> x;
                a.insert_begin(x);
                break;

            case 2:
                cin >> p >> x;
                a.insert_pos(p, x);
                break;

            case 3:
                cin >> x;
                a.insert_end(x);
                break;

            case 4:
                a.delete_begin();
                break;

            case 5:
                cin >> p;
                a.delete_pos(p);
                break;

            case 6:
                a.delete_end();
                break;

            case 7:
                a.display();
                break;
        }

    } while(choice != 8);

    return 0;
}