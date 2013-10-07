/*****
    
    Solution to system of linear equation in 2 variable
        aX + bY = c
        dX + eY = f
    Aditya Jha       11118007
    Amandeep Singh   11118014
    
    The programs checks whether there exists a solution or not and displays result appropiately
    
******/


#include<iostream>
#include<iomanip>

using namespace std;

int main() {

	double a1,b1,a2,b2,c1,c2,x,y;

	cout<<"This program solves liner equations if the form \na1X + b1Y = c1 and a2X + b2Y = c2"<<endl;
	cout<<"Enter a1 b1 c1 a2 b2 c2 in sequence with a space in between: ";	
	cin>>a1>>b1>>c1>>a2>>b2>>c2;
	
	double den = a2*b1 - a1*b2;
	if(a1/a2 == b1/b2 && b1/b2 != c1/c2) {
		cout<<"No solution"<<endl;
	}
        else if(a1/a2 == b1/b2 && b1/b2 == c1/c2) {
		cout<<"Infinite solutions"<<endl;
	} else {
		x = (b1*c2 - b2*c1)/den;
		y = (a2*c1 - a1*c2)/den;
	
		cout<<"The value of X: "<<fixed<<setprecision(2)<<x<<endl;
		cout<<"The value of Y: "<<fixed<<setprecision(2)<<y<<endl;
	}
		
    system("pause");
	return 0;
}
