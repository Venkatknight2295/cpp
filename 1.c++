// //#1
// //  #include<iostream>
// // int main(){
// //     std::cout<<"helloworld";
// //     return 0;
// // }

// // #2
// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     cout<<"hello world";
// //     return 0;

// // }


// // #3
// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int a =5;
// //     int b =6;
// //     float pi=3.14;
// //     cout<<"the first number is"<<a<<"\nthe second number is"<<b<<"\nthe value of pi"<<pi;
// //     return 0;
// // }

// // #4
// // #include <iostream>
// // using namespace std;
// // int glo=6;
// // void sum()
// // {
// //     int a;
// //     cout<<glo;
// // }
// // int main(){
// //     int glo=5;
// //     glo=78;
// //     int a=4;
// //     bool true_=true;
// //     sum();
// //     cout<<glo<<true_;
// //     return 0;
// // }

// // #5
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int num1,num2;
// //     cout<<"enter the value of num1";
// //     cin>>num1;
// //     cout<<"enter the value of num2";
// //     cin>>num2;
// //     cout<<"the sum of two numbers"<<num1+num2;
// //     return 0;
// // }

// // #6
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int a=7;
// //     int b=2;
// //     cout<<"the following are the operants in C++"<<endl;
// //     cout<<"a+b "<<a+b<<endl;
// //     cout<<"a-b "<<a-b<<endl;
// //     cout<<"a*b "<<a*b<<endl;
// //     cout<<"a/b "<<a/b<<endl;
// //     cout<<"a++ "<<a++<<endl;
// //     cout<<"a-- "<<a--<<endl;
// //     cout<<"++a "<<++a<<endl;
// //     cout<<"--a "<<--a<<endl;
// //     return 0;
// // }

// // #7
// // #include<iostream>
// // using namespace std;

// // int main(){
// //     float a=46.5F;
// //     long double b=46.5L;
// //     cout<<"the size of "<<sizeof(46.5)<<endl;
// //     cout<<"the size of "<<sizeof(46.5f)<<endl;
// //     cout<<"the size of "<<sizeof(46.5F)<<endl;
// //     cout<<"the size of "<<sizeof(46.5l)<<endl;
// //     cout<<"the size of "<<sizeof(46.5L)<<endl;
// //     return 0;
// // }

// //reference variables

// // {float x =455;
// // float &y=x;
// // cout<<x<<endl;
// // cout<<y<<endl;
// // return 0;
// // }

// // type casting

// // {
// //     long double a=45.5;
// //     float b=45.5;
// //     cout<<"the value of a is"<<(float)a<<endl;
// //     cout<<"the value of b is"<<(int)b<<endl;
// //     int c = int(b);
// //     int d = float(a);
// //     cout<<"the value of a+b"<<a+c<<endl;
// //     cout<<"the value of a+b"<<a+b<<endl;
// //     cout<<"the value of a+b"<<a+d<<endl;
// //     return 0;
// // }

// // #8

// // constants
// /* now the value of a changes if we change it afterwards*/
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int a=34;
// //     cout<<"the value of a is"<<a<<endl;
// //     a=43;
// //     cout<<"the value of a now is"<<a<<endl;
// //     return 0;
// // }

// /*now the value of a does not change until const is removed*/
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     const int a=23;
// //     cout<<"th value of a is "<<a;
// //     a=43;
// //     cout<<"the value of a now is"<<a;
// //     return 0;
// // }

// // manipulators
// /*there are two types of manipulators:-
// 1.endl
// 2.setw()*/
// // #include<iostream>
// // #include<iomanip>
// // using namespace std;
// // int main(){
// //     int a=4,b=36,c=457;
// //     cout<<"value without setw"<<a<<endl;
// //     cout<<"value without setw"<<b<<endl;
// //     cout<<"value without setw"<<c<<endl;
// //     cout<<"value with setw"<<setw(4)<<a<<endl;
// //     cout<<"value with setw"<<setw(4)<<b<<endl;
// //     cout<<"value with setw"<<setw(4)<<c<<endl;
// //     return 0;
// // }

// //operator precedence
// /* refer the website for these*/


// //#include<iostream>
// //using namespace std;
// // int main(){
// //    int a=2,b=3;
// //    int c=((((a*5)+b)-45)+87);
// //   cout<<c;
// //    return o;
// // }

// //#9
// // #include<iostream>
// // using namespace std;
// //  int main()
// //  {
// //     int age;
// //     cout<<"enter your age"<<endl;
// //     cin>>age;
// //     if((age<18)&&(age>0)){
// //     cout<<"you are not allowed to the party"<<endl;
// //     }
// //     else if(age==18){
// //         cout<<"you are kid u will get kids pass"<<endl;
// //     }
// //     else if(age<1){
// //         cout<<"you are not yet born"<<endl;
// //         }
// //         else{
// //             cout<<"you are allowed to the party"<<endl;
// //         }
// //  }
// // switch case
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int age;
// //     cout<<"enter your age";
// //     cin>>age;
// //     switch(age){
// //         case 18:
// //             cout<<"your age is 18"<<endl;
// //             break;
// //           case 22:
// //             cout<<"your age is 22"<<endl;
// //             break;
// //             case 2:
// //             cout <<"grow up first"<<endl;

// //             default:
// //             cout<<"no special cases"<<endl;
// //             break;
        
// //     }
// //     cout<<"done with switch case"<<endl;
// //     return 0;
// // }

// //10

// // #include <iostream>

// // using namespace std;
// // int main()
// // {
//     /*Loops in C++:
//     There are three types of loops in C++:
//         1. For loop
//         2. While Loop
//         3. do-While Loop
//     */

//     /*For loop in C++*/
//     // int i=1;
//     // cout<<i;
//     // i++;

//     // for (int i = 1; i <= 40; i++)
//     // {
//     //     /* code */
//     //     cout<<i<<endl;
//     // }

//     // Example of infinite for loop
//     // for (int i = 1; 34 <= 40; i++)
//     // {
//     //     /* code */
//     //     cout<<i<<endl;
//     // }

//     //  Printing 1 to 40 using while loop
//     // int i=1;
//     // while(i<=40){
//     //     cout<<i<<endl;
//     //     i++;
//     // }

//     // Example of infinite while loop
//     // int i = 1;
//     // while (true)
//     // {
//     //     cout << i << endl;
//     //     i++;
//     // }

//     /* do While loop in C++*/
//         // Syntax:
//         // do
//         // {
//         //     C++ statements;
//         // }while(condition);
        
//     //  Printing 1 to 40 using do while loop
//     // int i=1;
//     // do{
//     //     cout<<i<<endl;
//     //     i++;
//     // }while(false);

// //     return 0;
// // }

// // #11
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     for (int i=0; i<40;i++)
// //     {
// //         cout<<i<<endl;
// //         if(i=2){
// //             break;
// //         }
// //     }
// //     return 0;
// // }
// //    for(int i=0;i<40;i++)
// //    {
// //     cout<<i<<endl;
// //     if(i=2){
// //         continue;
// //     }
// //     return 0;
// //    }
// 
//#12
// #include<iostream>
// using namespace std;

// int main(){
//     int a=3;
//     int* b;
//     b = &a;
//     cout<<"The address of a is "<<&a<<endl;
//     cout<<"The address of a is "<<b<<endl;

//     
//     cout<<"The value at address b is "<<*b<<endl;

//    
//     int** c = &b;
//     cout<<"The address of b is "<<&b<<endl;
//     cout<<"The address of b is "<<c<<endl; 
//     cout<<"The value at address c is "<<*c<<endl; 
//     cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 

//     return 0;
// }

//#13
#include<iostream>
using namespace std;

int main(){
    
    int marks[] = {23, 45, 56, 89};

    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    marks[2] = 455;
    cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 
    
    return 0;
}
#14

#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};


int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1==2);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner; 
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;

    // ep harry;
    // struct employee shubham;
    // struct employee rohanDas;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout<<"The value is "<<harry.eId<<endl; 
    // cout<<"The value is "<<harry.favChar<<endl; 
    // cout<<"The value is "<<harry.salary<<endl; 
    return 0;
}
       









    
 








