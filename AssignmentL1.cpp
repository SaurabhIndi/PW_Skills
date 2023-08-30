// Ques: How can you output “Physics” and  “Wallah” in
// two different lines in C++?
#include<iostream>
using namespace std;
int main(){
    cout<<"Physics"<<endl;
    cout<<"Wallah"<<endl;
}

// Ques: Print 10 using 2 positive numbers
// less than 6  in C++ as output.
#include<iostream>
using namespace std;
int main(){
    cout<<5+5<<endl;
}

// Ques: How much space does following data types take ?
// int - 4 bytes
// bool - 1 byte
// float - 4 bytes

// Ques: What is the output of this program?
#include<iostream>
using namespace std;
void main(){
	int a=4;
    int b=5;
    a++;b--;
    cout<<++a<<" "<<b--;
}
// error: '::main' must return 'int'    
//  void main(){
//            ^

// Ques: WAP to find the circumference of a circle
// with radius 10 in C++.
#include<iostream>
using namespace std;
int main(){
    float pi=3.14,r,c;
    r = 10;
    c = 2*pi*r;
    cout<<"Circumference is "<<c<<endl;
}

// Ques: How many of these can be a variable name?
// Ans:
// _FLOAT
// FLOAT