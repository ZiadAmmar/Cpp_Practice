#include "Book.h"
#include<string>
#include<iostream>

using namespace std;
//Passing by constant referance 
//void printBookDetails(const Book& book); declared it inside the class
int main(){

    Book gameOfThrones("George Martin", "Song of Ice and Fire", 
        "Fantasy", 865);
    
    Book mathBook("James Stewart", "Calculus", "Math", 1392);

    Book cppBook("Bjarne Stroustrup", "The C++ Programming Language",
        "Programming", 1376);

    gameOfThrones.printBookDetails();
    mathBook.printBookDetails();
    cppBook.printBookDetails();
    
    // printBookDetails(gameOfThrones);
    // printBookDetails(mathBook);
    // printBookdetails(cppBook);
    
    return 0;
}
//defined in the class file
// void printBookDetails(const Book& book){
//     cout<<"Book: \t"<<book.getTitle()
//     <<"\nBy: \t"<<book.getAuthor()
//     <<"\nGenre: \t"<<book.getGenre()
//     <<"\nNumber of Pages: \t"<<book.getNumPages()<<endl;
//     cout<<"*****************************************"<<endl;
// }