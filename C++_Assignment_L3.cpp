// Ques : Take 2 integers input and print the greatest of them.

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Integer 1 = ";
    cin>>a;
    cout<<"Integer 2 = ";
    cin>>b;
    if(a>b) cout<<"Integer 1 is greatest"<<endl;
    else cout<<"Integer 2 is greatest"<<endl;
}

// Ques : Given the radius of the circle predict whether numerically
// area of this circle is larger than the circumference or not.

#include<iostream>
using namespace std;
int main(){
    float pi,r,area,cir;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    area=pi*(r*r);
    cir=2*pi*r;
    if(area>cir) cout<<"Area is greater than Circumference"<<endl;
    else cout<<"Area is not greater than Circumference"<<endl;
}

// Ques : Any year is input through the keyboard. Write a program to
// determine whether the year is a leap year or not.
// (Considering leap year occurs after every 4 years)

#include <iostream>
using namespace std;
int main() {

  int year;

  cout << "Enter a year: ";
  cin >> year;

  // if year is divisible by 4 AND not divisible by 100
  // OR if year is divisible by 400
  // then it is a leap year
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    cout << year << " is a leap year.";
  }
  else {
    cout << year << " is not a leap year.";
  }

  return 0;
}

// Ques : Given the length and breadth of a rectangle, write a program to
// find whether numerically the area of the rectangle is greater than
// its perimeter.

#include<iostream>
using namespace std;
int main(){
    float l,b,area,para;
    cout<<"Enter the length of Rectangle: ";
    cin>>l;
    cout<<"Enter the breadth of Rectangle: ";
    cin>>b;
    area=l*b;
    para=2*(l+b);
    if(area>para) cout<<"Area is greater than Parameter"<<endl;
    else cout<<"Area is not greater than Parameter"<<endl;
}

// Ques : Write a program to input sides of a triangle and check whether
// a triangle is equilateral, scalene or isosceles triangle.

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the sides of Triangle: ";
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"Equilateral";
    }
    else{
        if(a==b || b==c || c==a){
            cout<<"Isosceles";
        }
        else{
            cout<<"Scalene";
        }
    }
}

// Ques : If the marks of A, B and C are input through the keyboard,
// write a program to determine the student scoring least marks.

#include<iostream>
using namespace std;
int main(){
    float A,B,C;
    cout<<"Marks of A: "<<endl;
    cin>>A;
    cout<<"Marks of B: "<<endl;
    cin>>B;
    cout<<"Marks of C: "<<endl;
    cin>>C;
    if(A<B && A<C){
        cout<<"Marks of A is least"<<endl;
    }
    else if(B<A && B<C){
        cout<<"Marks of B is least"<<endl;
    }
    else if(C<A && C<B){
        cout<<"Marks of C is least"<<endl;
    }
    else{
        cout<<"A,B and C are Equal"<<endl;
    }
}

// Ques : Given a point (x, y), write a program to find out
//  if it lies on the x-axis, y-axis or at the origin, viz. (0, 0). 

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"x axis: ";
    cin>>x;
    cout<<"y axis: ";
    cin>>y;
    if(x!=0 && y==0){
        cout<<"lies on x axis";
    }
    else if(y!=0 && x==0){
        cout<<"lies on y axis";
    }
    else if(x==0 && y==0){
        cout<<"lies at origin";
    }
    else{
        cout<<"lies at ("<<x<<","<<y<<")";
    }
}

// Ques : Given three points (x1, y1), (x2, y2) and (x3, y3),
// write a program to check if all the three points fall on one straight line.

#include<iostream>
using namespace std;
int main(){
    double x1,x2,x3,y1,y2,y3;
    cout<<"Input (x1, y1) ";
    cin>>x1>>y1;
    cout<<"Input (x2, y2) ";
    cin>>x2>>y2;
    cout<<"Input (x3, y3) ";
    cin>>x3>>y3;
    double slope1 = (y2-y1)/(x2-x1);
    double slope2 = (y3-y2)/(x3-x2);
    if(slope1==slope2){
        cout<<"all the three points fall on one straight line";
    }
    else{
        cout<<"Not collinear";
    }
}

// Ques : Write a C++ program to input any character and
// check whether it is the alphabet, digit or special character.

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Input Character: ";
    cin>>ch;
    int x=int(ch);
    if((x>=97 && x<=122)||(x>=65 && x<=90)){
        cout<<"alphabet";
    }
    else if(x>=48 && x<=57){
        cout<<"digit";
    }
    else{
        cout<<"special character";
    }
}

// Predict the output

#include<iostream>
using namespace std;

int main() {
    int a = 500, b, c;
    if (a >= 400)
        b = 300;
    c = 200;
    cout << "value of b and c are respectively " << b << " and " << c;
    return 0;
}

// Ouput:-
// value of b and c are respectively 300 and 200
