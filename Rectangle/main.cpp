#include<bits/stdc++.h>
#include"Rectangle.h"

using namespace std;

int main(){
    Rectangle square;
    Rectangle r1(5.0,10.0);
    Rectangle r2;

    r2.setLength(1.5);
    r2.setWidth(3.0);

    cout<<"Area of the unit square is: "<<square.area()<<endl;
    cout<<"Length of r1: "<<r1.getLength()<<endl;
    cout<<"Width of r1: "<<r1.getwidth()<<endl;
    cout<<"Area of r1: "<<r1.area()<<endl;
    cout<<"Perimeter of r1: "<<r1.perimeter()<<endl;
    cout<<"Length of r2: "<<r2.getLength()<<endl;
    cout<<"Width of r2: "<<r2.getwidth()<<endl;
    cout<<"Area of r2: "<<r2.area()<<endl;
    cout<<"Perimeter of r2: "<<r2.perimeter()<<endl;
    
}