#include <iostream>
using namespace std;

int main() {
    cout << "==============================\n";
    cout << " SMART LIBRARY MANAGEMENT\n";
    cout << "==============================\n";

    cout << "\n1. Add Book";
    cout << "\n2. View Book";
    cout << "\n3. Exit";

    int ch;
    cout << "\n\nEnter Choice: ";
    cin >> ch;

    if(ch==1)
        cout << "Book Added Successfully!";
    else if(ch==2)
        cout << "Showing Books...";
    else
        cout << "Thank You!";

    return 0;
}
