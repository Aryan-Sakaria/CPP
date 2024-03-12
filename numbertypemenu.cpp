#include<iostream>
using namespace std;

void isEven(int num)
{
    if((num%2)==0)
    {
        cout<<"Num is even"<<endl;
    }
    else
    {
        cout<<"Num is odd"<<endl;
    }
}
void isPositive(int num)
{
    if(num<0)
    {
        cout<<"Num is negative"<<endl;
    }
    else if(num==0)
    {
        cout<<"Num is zero"<<endl;
    }
    else
    {
        cout<<"Num is positive"<<endl;
    }
}
void isPrime(int num)
{
    int i,flag=1;
    for(i=2;i<=num/2;i++)
    {
        if(num%i == 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag==0)
    {
        cout<<"Num is not prime"<<endl;

    }
    else
    {
        cout<<"Num is prime"<<endl;
    }
}
void isPalindrome(int num)
{
    int temp,rev=0,rem;
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
    }
    if(num==rev)
    {
        cout<<"Num is Palindrome"<<endl;

    }
    else
    {
        cout<<"Num is not Palindrome"<<endl;
    }
}
void isArmstrong(int num)
{
    int a,b,sum=0;
    a=num;
    while(a!=0)
    {
        b=a%10;
        sum=sum+(b*b*b);
        a=a/10;
    }

    if (sum==num)
    {
        cout<<"Num is armstrong"<<endl;
    }
    else
    {
        cout<<"Num is not armstrong"<<endl;
    }
}
int main()
{
    int choice,num;

    cout<<"1. Check for even or odd number \n2. Check for positive,negative or zero\n3. Check for prime number\n4. Check for palindrome number\n5. Check for armstrong number\n0. Exit"<<endl;

    do
    {
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout <<"Enter Number = "<<endl;
                cin>>num;
                isEven(num);
                break;
            case 2:
                cout <<"Enter Number = "<<endl;
                cin>>num;
                isPositive(num);
                break;
            case 3:
                cout <<"Enter Number = "<<endl;
                cin>>num;
                isPrime(num);
                break;
            case 4:
                cout <<"Enter Number = "<<endl;
                cin>>num;
                isPalindrome(num);
                break;
            case 5:
                cout <<"Enter Number = "<<endl;
                cin>>num;
                isArmstrong(num);
                break;
            case 0:
                cout<<"Thank you\nPrepared by Aryan Sakaria"<<endl;
                break;
            default:
                cout<<"Invalid choice! Please enter a valid option."<<endl;
                break;
        }
    } while(choice!=0);
    return 0;
}
