#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
    private:
    string author;
    string title;
    string genre;
    int numPages;

    public:
    //constructor
    Book(string author, string title, string genre, int numPages);
    //getters
    string getAuthor() const;
    string getTitle() const;
    string getGenre() const;
    int getNumPages() const;
    //member function
    void printBookDetails() const;

};

#endif