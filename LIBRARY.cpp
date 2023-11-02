#include <iostream>
#include <string>
using namespace std;

int main() {
    string Borrow_Books;
    int Borrow_Date, Return_Date, Reading_Days;
    int fine, overdue_days;

    while (true)
    {
        cout << "\n  MAIN MENU: ";
        cout << "\n\n1. Borrow a book" <<endl<< endl << "2. Return a book" <<endl<< endl << "3. Quit"<<endl << endl;
        int option;
        cout << "Enter your choice: ";
        cin >> option;

        if (option == 1) 
        {
            cout << "\n\nEnter the Name of the book you want to borrow: ";
            cin.ignore(); 
            getline(cin, Borrow_Books);
            cout <<endl<< Borrow_Books << " is Available." << endl;
            cout << "\nConfirm Borrow (YES/NO)? ";
            string choice;
            cin >> choice;

            if (choice == "YES" || choice == "yes") 
            {
                cout << "\nBorrow Date: ";
                cin >> Borrow_Date;
                cout << "\nReturn Date: ";
                cin >> Return_Date;
                Reading_Days = Return_Date - Borrow_Date;
                cout << "\nYou must return the book after " << Reading_Days << " Days." << endl;
            }
        }
        else if (option == 2)
        {
            cout << "\nEnter the name of the book you want to return: ";
            string Return_books;
            cin.ignore(); 
            getline(cin, Return_books);

            if (Return_books == Borrow_Books) 
            {
                cout << "\nBook is Returned. Thank You!" << endl;
                cout << "\nNumber of Days after you borrowed the book: ";
                cin >> overdue_days;

                if (overdue_days > Reading_Days) {
                    fine = (overdue_days - Reading_Days) * 1;
                    cout << "\nPlease pay the Fine Otherwise Your Membership will be canceled." << endl;
                    cout << "\nTotal Fine = $" << fine << endl;
                }
                else 
                {
                    cout << "\nThank You For Returning the Book." << endl;
                }
            }
            else 
            {
                cout << "\nThis book was not borrowed by you." << endl;
            }
        }
        else if (option == 3)
        {
            return 0;
        }
        else
        {
            cout << "\nInvalid option. Please choose a valid option (1, 2, or 3)." << endl;
        }
    }
    cout << endl << endl;
    system("pause");    
    return 0;
}
