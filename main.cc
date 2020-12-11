#include<iostream>
#include<cmath>
using namespace std;

int Binary_to_Decimal(long long n);
long Decimal_to_Binary(int n);
int Decimal_to_Octal(int decimal);
int Octal_to_Decimal(int octal);

int main()
{
long long binaryNumber;
int octalNumber=0,decimalNumber=0;
int operation;
long long n;
int decimal,octal;
long binary;
cout<<"Conversion_System"<<endl;

cout<<"1.Binary to Decimal"<<endl;
cout<<"2.Decimal to Binary"<<endl;
cout<<"3.Decimal to Octal"<<endl;
cout<<"4.Octal to Decimal"<<endl;
cout<<"Enter your choice :"<<endl;
cin>>operation;

switch(operation)
{
case 1:
      cout<<"Enter a binary number"<<endl;
      cin>>n;
      cout<<"The decimal number is "<<Binary_to_Decimal(n)<<endl;
      break;
case 2:
      cout<<"Enter the decimal number "<<endl;
      cin>>decimal;
      cout<<"The equivalent binary number is "<<Decimal_to_Binary(decimal)<<endl;
      break;
case 3:
      cout<<"Enter a decimal number "<<endl;
      cin>>decimal;
      cout<<"The equivalent octal number is "<<Decimal_to_Octal(decimal)<<endl;
      break;

case 4:
        cout<<"Enter an Octal number " <<endl;
        cin>>octal;
        cout<<"The Equivalent decimal number is "<<Octal_to_Decimal(octal)<<endl;
        break;
default:
        cout<<"Invalid Choice"<<endl;
        }
   return 0;
}




