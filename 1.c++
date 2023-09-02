//#1
//  #include<iostream>
// int main(){
//     std::cout<<"helloworld";
//     return 0;
// }

// #2
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"hello world";
//     return 0;

// }


// #3
// #include <iostream>
// using namespace std;
// int main(){
//     int a =5;
//     int b =6;
//     float pi=3.14;
//     cout<<"the first number is"<<a<<"\nthe second number is"<<b<<"\nthe value of pi"<<pi;
//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;
// int glo=6;
// void sum()
// {
//     int a;
//     cout<<glo;
// }
// int main(){
//     int glo=5;
//     glo=78;
//     int a=4;
//     bool true_=true;
//     sum();
//     cout<<glo<<true_;
//     return 0;
// }

// #5
// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2;
//     cout<<"enter the value of num1";
//     cin>>num1;
//     cout<<"enter the value of num2";
//     cin>>num2;
//     cout<<"the sum of two numbers"<<num1+num2;
//     return 0;
// }

// #6
// #include<iostream>
// using namespace std;
// int main(){
//     int a=7;
//     int b=2;
//     cout<<"the following are the operants in C++"<<endl;
//     cout<<"a+b "<<a+b<<endl;
//     cout<<"a-b "<<a-b<<endl;
//     cout<<"a*b "<<a*b<<endl;
//     cout<<"a/b "<<a/b<<endl;
//     cout<<"a++ "<<a++<<endl;
//     cout<<"a-- "<<a--<<endl;
//     cout<<"++a "<<++a<<endl;
//     cout<<"--a "<<--a<<endl;
//     return 0;
// }

// #7
// #include<iostream>
// using namespace std;
// int main(){
//     float a=46.5F;
//     long double b=46.5L;
//     cout<<"the size of "<<sizeof(46.5)<<endl;
//     cout<<"the size of "<<sizeof(46.5f)<<endl;
//     cout<<"the size of "<<sizeof(46.5F)<<endl;
//     cout<<"the size of "<<sizeof(46.5l)<<endl;
//     cout<<"the size of "<<sizeof(46.5L)<<endl;
//     return 0;
// }

//reference variables

// {float x =455;
// float &y=x;
// cout<<x<<endl;
// cout<<y<<endl;
// return 0;
// }

// type casting

// {
//     long double a=45.5;
//     float b=45.5;
//     cout<<"the value of a is"<<(float)a<<endl;
//     cout<<"the value of b is"<<(int)b<<endl;
//     int c = int(b);
//     int d = float(a);
//     cout<<"the value of a+b"<<a+c<<endl;
//     cout<<"the value of a+b"<<a+b<<endl;
//     cout<<"the value of a+b"<<a+d<<endl;
//     return 0;
// }

// #8

// constants
/* now the value of a changes if we change it afterwards*/
// #include<iostream>
// using namespace std;
// int main(){
//     int a=34;
//     cout<<"the value of a is"<<a<<endl;
//     a=43;
//     cout<<"the value of a now is"<<a<<endl;
//     return 0;
// }

/*now the value of a does not change until const is removed*/
// #include<iostream>
// using namespace std;
// int main(){
//     const int a=23;
//     cout<<"th value of a is "<<a;
//     a=43;
//     cout<<"the value of a now is"<<a;
//     return 0;
// }

// manipulators
/*there are two types of manipulators:-
1.endl
2.setw()*/
// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main(){
//     int a=4,b=36,c=457;
//     cout<<"value without setw"<<a<<endl;
//     cout<<"value without setw"<<b<<endl;
//     cout<<"value without setw"<<c<<endl;
//     cout<<"value with setw"<<setw(4)<<a<<endl;
//     cout<<"value with setw"<<setw(4)<<b<<endl;
//     cout<<"value with setw"<<setw(4)<<c<<endl;
//     return 0;
// }

//operator precedence
/* refer the website for these*/


//#include<iostream>
//using namespace std;
// int main(){
//    int a=2,b=3;
//    int c=((((a*5)+b)-45)+87);
//   cout<<c;
//    return o;
// }

//#9
// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int age;
//     cout<<"enter your age"<<endl;
//     cin>>age;
//     if((age<18)&&(age>0)){
//     cout<<"you are not allowed to the party"<<endl;
//     }
//     else if(age==18){
//         cout<<"you are kid u will get kids pass"<<endl;
//     }
//     else if(age<1){
//         cout<<"you are not yet born"<<endl;
//         }
//         else{
//             cout<<"you are allowed to the party"<<endl;
//         }
//  }
// switch case
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"enter your age";
//     cin>>age;
//     switch(age){
//         case 18:
//             cout<<"your age is 18"<<endl;
//             break;
//           case 22:
//             cout<<"your age is 22"<<endl;
//             break;
//             case 2:
//             cout <<"grow up first"<<endl;

//             default:
//             cout<<"no special cases"<<endl;
//             break;
        
//     }
//     cout<<"done with switch case"<<endl;
//     return 0;
// }

//10

// #include <iostream>

// using namespace std;
// int main()
// {
    /*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop
    */

    /*For loop in C++*/
    // int i=1;
    // cout<<i;
    // i++;

    // for (int i = 1; i <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    // Example of infinite for loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    //  Printing 1 to 40 using while loop
    // int i=1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of infinite while loop
    // int i = 1;
    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    /* do While loop in C++*/
        // Syntax:
        // do
        // {
        //     C++ statements;
        // }while(condition);
        
    //  Printing 1 to 40 using do while loop
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(false);

//     return 0;
// }




    
 








