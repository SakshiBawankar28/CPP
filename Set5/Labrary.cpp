// Library Catalog with Books and Journals:
// Problem Statement: Build a library catalog system. Create a base class LibraryItem with properties like title and author. Then, derive classes like Book and Journal, each with their unique properties. Implement methods to check out and return items in the derived classes.


#include <iostream>
#include <string>

using namespace std;

// Base class
class LibraryItem {
protected:
    string title;
    string author;

public:
    // Constructor
    LibraryItem(const string& t, const string& a) : title(t), author(a) {}

    // Virtual function to display item information
    virtual void display() const = 0;

    // Virtual function for checking out an item
    virtual void checkout() = 0;

    // Virtual function for returning an item
    virtual void returnItem() = 0;
};

// Derived class Book
class Book : public LibraryItem {
private:
    string isbn;
    bool checkedOut;

public:
    // Constructor
    Book(const string& t, const string& a, const string& i) : LibraryItem(t, a), isbn(i), checkedOut(false) {}

    // Overridden display function
    void display() const override {
        cout << "Title: " << title << ", Author: " << author << ", ISBN: " << isbn;
        if (checkedOut)
            cout << " (Checked Out)";
        cout << endl;
    }

    // Overridden checkout function
    void checkout() override {
        if (!checkedOut) {
            checkedOut = true;
            cout << "Book '" << title << "' checked out successfully." << endl;
        } else {
            cout << "Book '" << title << "' is already checked out." << endl;
        }
    }

    // Overridden return function
    void returnItem() override {
        if (checkedOut) {
            checkedOut = false;
            cout << "Book '" << title << "' returned successfully." << endl;
        } else {
            cout << "Book '" << title << "' is not checked out." << endl;
        }
    }
};

// Derived class Journal
class Journal : public LibraryItem {
private:
    int issueNumber;
    bool checkedOut;

public:
    // Constructor
    Journal(const string& t, const string& a, int i) : LibraryItem(t, a), issueNumber(i), checkedOut(false) {}

    // Overridden display function
    void display() const override {
        cout << "Title: " << title << ", Author: " << author << ", Issue Number: " << issueNumber;
        if (checkedOut)
            cout << " (Checked Out)";
        cout << endl;
    }

    // Overridden checkout function
    void checkout() override {
        if (!checkedOut) {
            checkedOut = true;
            cout << "Journal '" << title << "' checked out successfully." << endl;
        } else {
            cout << "Journal '" << title << "' is already checked out." << endl;
        }
    }

    // Overridden return function
    void returnItem() override {
        if (checkedOut) {
            checkedOut = false;
            cout << "Journal '" << title << "' returned successfully." << endl;
        } else {
            cout << "Journal '" << title << "' is not checked out." << endl;
        }
    }
};

int main() {
    // Creating objects of different library items
    Book book("The Great Gatsby", "F. Scott Fitzgerald", "978-0743273565");
    Journal journal("Scientific American", "Various Authors", 123);

    // Displaying information of library items
    cout << "Library Items:" << endl;
    book.display();
    journal.display();

    // Checking out and returning library items
    cout << "\nChecking out items:" << endl;
    book.checkout();
    journal.checkout();

    cout << "\nReturning items:" << endl;
    book.returnItem();
    journal.returnItem();

    return 0;
}
