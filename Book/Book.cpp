#include "Book.h"
#include <string>
#include <iostream>
using namespace std;

//constructor
Book::Book(string author, string title, string genre, int numPages){
    this->author = author;
    this->title = title;
    this->genre = genre;
    this->numPages = numPages;
}
//getters
string Book::getAuthor() const{
    return author;
}
string Book::getTitle() const{
    return title;
}
string Book::getGenre() const{
    return genre;
}
int Book::getNumPages() const{
    return numPages;
}
//member function
void Book::printBookDetails() const{
    cout<<"Book: \t"<<title
    <<"\nBy: \t"<<author
    <<"\nGenre: \t"<<genre
    <<"\nNumber of Pages: \t"<<numPages<<endl;
    cout<<"*****************************************"<<endl;
}