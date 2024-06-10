// Create a class Book with data members as bname,id,author,price. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the object of this class in main method and invoke all the methods in that class. 

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string bname;
    int id;
    string author;
    float price;

public:
    
    Book() 
    {
        cout<<"-----Default Constructor-----"<<endl;
        bname = "Coding";
        id = 101;
        author = "ABC";
        price = 1110.0;
    }
Book(string bname, int id, string author, float price) 
    {
        cout<<"-----Parameterized Constructor-----"<<endl;
        this -> bname = bname;
        this -> id = id;
        this -> author = author;
        this -> price = price;
    }

    string getBname() {
        return bname;
    }
    void setBname(string name) {
        bname = name;
    }

    int getId() {
        return id;
    }
    void setId(int id) {
        this->id = id;
    }

    string getAuthor() {
        return author;
    }
    void setAuthor(string author) {
        this->author = author;
    }

    float getPrice() {
        return price;
    }
    void setPrice(float price) {
        this->price = price;
    }

    void display() {
        cout << "Book Name: " << bname << endl;
        cout << "ID: " << id << endl;
        cout << "Author: " << author << endl;
        cout << "Price: Rs." << price << endl;
    }
};

int main() {
    
    Book book1;
    book1.display();
    cout<<endl;

    Book book2("Java", 456, "JJk", 1210.99);
    book2.display();
    cout<<endl;

    book1.setBname("Python");
    book1.setId(621);
    book1.setAuthor("KTH");
    book1.setPrice(2912.99);

    cout << "\nModified Book Details:" << endl;
    book1.display();

    return 0;
}
