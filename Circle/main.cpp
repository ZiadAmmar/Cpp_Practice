#include "Circle.h"
#include <iostream>

using namespace std;

void printCircleDetails(const Circle& circle);

int main(){
    double radius;
    
    Circle unitCircle;
    Circle Circle5(5.0);
    Circle Circle10(10.0);

    cout<<"Unit Circle: \n";
    printCircleDetails(unitCircle);
    cout<<"Enter the radius you want to set: ";
    cin >> radius;
    unitCircle.setRadius(radius);
    cout<<"Setting the radius to: "<<unitCircle.getRadius()<<endl;
    cout<<"Circle is now: "<<endl;
    printCircleDetails(unitCircle);
    cout<<"Second Circle: \n";
    printCircleDetails(Circle5);
    cout<<"Third Circle: \n";
    printCircleDetails(Circle10);

    return 0;
}

void printCircleDetails(const Circle& circle){
    cout<<"*************************************\n";
    cout<<"Circle radius: \n\t\t"<<circle.getRadius()<<endl;
    cout<<"Circle Circumference: \n\t\t"<<circle.circumference()<<endl;
    cout<<"Circle area: \n\t\t"<<circle.area()<<endl;
    cout<<"**************************************\n";
}
