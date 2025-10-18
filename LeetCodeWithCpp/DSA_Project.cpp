#include<iostream>
#include<string>
using namespace std;

class Book{
    public:
        int id;
        string title;
        string author;
        float price;
        Book* next;

        Book(int id, string title, string author, float price){
            this->id = id;
            this->title = title;
            this->author = author;
            this->price = price;
        }
};
class Library{
    public:
        Book* head;
        Library(){
            head = NULL;
        }
    //Add new books in library
    void addNewBook(int id, string title, string author, float price){
        Book* newBook = new Book(id, title, author, price);

        if(head == NULL){
            head = newBook;
            cout<<"Book added as first record \n";
            return;
        }
        Book* temp = head;
        while(temp != NULL){
            temp = temp->next;

            temp->next = newBook;
            cout<< "Book added successfully \n";
        }
    }
    //Display all books
    void displayAllBooks(){
        if(head == NULL){
            cout<<"No book in library. \n";
            return;
        }

        cout<<"-- Library Books -- \n";
        Book* temp = head;
        while(temp!=head){
            cout<<"ID;"<<temp->id<< ", Title: "<<temp->title<<", Autor: "<<temp->author<<", price: Rs"<<temp->price<<endl;
            temp = temp->next;
        }

    }

    //Search for a book..
    void serchBook(int id){
        Book* temp  = head;
        while(temp!=NULL){
            if(id == temp->id){
                cout<<"Book Found! \n Title: "<<temp->title<<", Author: "<<temp->author<<", Price: Rs"<<temp->price<<endl;
                return;
            }
            temp = temp->next;
        }
        cout<<"Book not found!!!!!!!!!!\n";
    }
    //Delete a book
    void deleteBook(int id){
        if(head == NULL){
            cout<<"No books to delete. \n";
            return;
        }
        Book* temp  = head;
        while(temp!=NULL && temp->next->id!=id){
            temp = temp->next;
        }
        if(temp == NULL){
            cout<<"Book not found! \n";
            return;
        }
        temp = temp->next->next;
        cout<<"Book deleted successfully!\n";
    }


    void displayAllBooks(){
        
    };
};




int main(){
    Library lib;
    int choice, id;
    string title, author;
    float price;

    do{
        cout<<"\n======= Library Management System ============\n";
        cout<<"1. Add Book\n";
        cout<<"2. Display Book\n";
        cout<<"3. Search Book\n";
        cout<<"4. Delete Book\n";
        cout<<"5. Update Books\n";
        cout<<"6. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"Enter ID, Title, Author, Price:\n";
            cin>>id;
            cin.ignore();
            getline(cin, title);
            getline(cin, author);
            cin>>price;
            lib.addNewBook(id, title, author, price);
            break;

            case 2:
                lib.displayAllBooks();
                break;
            case 3:
                cout<<"Enter Books ID to search: ";
                cin >>id;
                lib.serchBook(id);
                break;
            case 4:
                cout<<"Enter Books ID to delete: ";
                cin>>id;
                lib.deleteBook(id);
            // case 5:
            //     cout<<"Enter Book ID to update: \n";
            //     cin>>id;
            //     cin.ignore();
            //     cout<<"Enter new Title, Author, Price:";
            //     getline(cin, title);
            //     getline(cin, author);
            //     cin>>price;
            //     lib.updateBook(id, title, author, price);
            //     break;

            case 6:
                cout<<"Exiting program...\n";
                break;
            default:
                cout<<"Invalid choice!\n";
        }
    }while(choice !=6);


    return 0;
}