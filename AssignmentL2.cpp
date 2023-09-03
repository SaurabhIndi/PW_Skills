// Ques:  Find the output for this code .
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter first number\n";
    cin>>x;  // user will give ‘x’ a value.
    int y,m;
    cout<<"Enter second number and value for taking modulus\n";
    cin>>y>>m;  // user will give ‘y’ a value.
    int Z= (x*y)%m;
    cout<<"Output is :"<<Z;
}
// Output is :
// Enter first number
// 2
// Enter second number and value for taking modulus
// 3 4
// Output is :2

// Ques: Find the output for this code .
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter first number\n";
    cin>>x;  // user will give ‘x’ a value.
    int y;
    cout<<"Enter second number\n";
    cin>>y;  // user will give ‘y’ a value.
    cout<<(x != y)<<" "<<(x>=y);
}
// Output is :
// Enter first number
// 1
// Enter second number
// 1
// 0 1

// Ques: Find the output for this code .
#include<iostream>
using namespace std;
int main(){
    int x,y; //3 4
    cin>>x>>y; //3 4
    x+=y; //now x= 3+4 =7
    x-=y; //now x= 3-4 =-1
    x%=y; //now x= 3%4 =3 (3<4)
    cout<<x; // x = 3
}
// Output is :
// 3
// 4
// 3

// Ques: WAP for finding the volume of
// cylinder by taking radius and height as input.
#include<iostream>
using namespace std;
int main(){
    float pi,vol,r,h;
    pi =3.14;
    cout<<"Enter radius and height: ";
    cin>>r>>h;
    vol=pi*(r*r)*h;
    cout<<"Volume is: "<<vol;
}

// Ques: WAP to find the difference between ASCII of 
// two characters ,take them as input .
#include<iostream>
using namespace std;
int main(){
    char x,y;
    cout<<"Enter two characters: ";
    cin>>x>>y;
    int a,b;
    a=int(x);
    b=int(y);
    cout<<"ASCII difference is "<<a-b;
}

// Ques: Find the output.
#include<iostream>
using namespace std;
int main(){
    int i =  ( 4 + 7 / 5 * 6 * 6+9  )% 100  ;
    cout<<i;
}
// Output is :
// 49