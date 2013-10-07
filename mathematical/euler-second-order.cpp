/*
ADITYA JHA
11118007
PROGRAM TO SOLVE ODE OF THE FORM d2y/dt2 = a(dy/dt) + by(t)
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double a,b,intial_t_0, intial_t_1, intial_y_0, intial_y_1, final_t, h, copy, y, slope1, slope2, previous_y, new_y, y1, answer;
    int n, i=0;;
    cout<<"d2y/dt2 = a(dy/dt) + by(t)\n";
    cout<<"Enter a and b: ";
    cin>>a>>b;
    
    cout<<"Enter initial t and y: ";
    cin>>intial_t_0>>intial_y_0;
    
    cout<<"Enter initial t and dy/dt: ";
    cin>>intial_t_1>>intial_y_1;
    
    cout<<"Enter value of t you want to calulate y at: ";
    cin>>final_t;
    
    cout<<"Enter iteration limit: ";
    cin>>n;
    
    h = (final_t - intial_t_0)/n;
    
    copy = intial_t_0;
    y = intial_y_0;
    y1 = intial_y_1;
    //new_y = intial_y_1;
    
    cout<<"\n\n x "<<"    y   "<<"  previous_y"<<" new_y   "<<endl;
    cout<<"--------------------------------------------------\n";
    while(i <= n) {
        slope1 = y1;
        previous_y = y + h*slope1;
        slope2 = a*slope1 + b*y;
        new_y = y1 + h*slope2;
        cout<<fixed<<setprecision(2)<<copy<<"  "<<y<<"  "<<previous_y<<"  "<<new_y<<endl;
        answer = y;
        copy += h;
        y = previous_y;
        y1 = new_y;
        i++;
    } 
    cout<<endl<<answer<<endl;
    
    system("pause");   
    return 0;
}    
