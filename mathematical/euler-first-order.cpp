/*
ADITYA JHA
11118007
mt 1
Solution to first order ordinary differential equation bu EULER'S METHOD

*/

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    cout<<"This program solves ordinary differential equation(first order) by Euler's Method\n";
    cout<<"The differential equation is of the form dy/dx = ax + by\n";
    cout<<"Enter the coefficents a and b: ";
    
    double a = 0.00, b = 0.00, initial_x = 0.00, initial_y = 0.00, h = 0.00, x = 0.00, y = 0.00, copy = 0.00, slope = 0.00, new_y = 0.00;
    int n = 0;
    cin>>a>>b;
    
    cout<<"Enter the boundary condition for x and y: ";
    cin>>initial_x>>initial_y;
    
    cout<<"Enter the value for x you want to compute the value of y: ";
    cin>>x;
    cout<<"Enter number of times you want to iterate: ";
    cin>>n;
    copy = initial_x;
    y = initial_y;
    h = (x - initial_x)/n;
    int i=0;
    double answer = 0.00;
    
    cout<<"\n\n x "<<"    y   "<<"  slope"<<" new_y   "<<endl;
    cout<<"--------------------------------------------------\n";
    while(i <= n) {
        slope = a*copy + b*y;
        new_y = y + h*slope;
        cout<<fixed<<setprecision(2)<<copy<<"  "<<y<<"  "<<slope<<"  "<<new_y<<endl;
        copy += h;
        answer = y;
        y = new_y;
        i++;
    }    
    
    cout<<fixed<<setprecision(2)<<"y: "<<answer<<endl;
    
    system("pause");
    return 0;   
}    
