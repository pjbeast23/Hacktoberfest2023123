#include<iostream>
using namespace std;

int add(int a, int b)
{
    int answer=a+b;
    cout<<answer;
    return 0;
}

int subtract(int a, int b)
{
    int answer=a-b;
    cout<<answer;
    return 0;
}
int multiply(int a, int b)
{
    int answer=a*b;
    cout<<answer;
    return 0;
}
int devide(int a, int b)
{
    int answer=a/b;
    cout<<answer;
    return 0;
}
int modulo(int a, int b)
{
    int answer=a%b;
    cout<<answer;
    return 0;
}
int main()
{
    int num1,num2,choice;
    cout<<"Enter 1st Number:";
    cin>>num1;
    cout<<"\nEnter 2nd Number:";
    cin>>num2;

do{
    cout<<"\n====MENUE===="<<endl;
    cout<<"1. ADDITION"<<endl;
    cout<<"2. SUBTACTION"<<endl;
    cout<<"3. MULTIPLICATION"<<endl;
    cout<<"4. DIVISION"<<endl;
    cout<<"5. MODULUS"<<endl;
    cout<<"6. EXIT"<<endl;

    cout<<"Enter Your Choice:";
    cin>>choice;

    switch(choice)
    {
        case 1: add(num1,num2); 
                break;
        case 2: subtract(num1,num2); 
                break;
        case 3: multiply(num1,num2); 
                break;
        case 4: devide(num1,num2); 
                break;
        case 5: modulo(num1,num2); 
                break;
        case 6: break;
        default: add(num1,num2); 
                 break;
    }

}while(choice!=6);
    


    return 0;
}