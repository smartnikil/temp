#include <iostream>
#include <conio.h>
int main()
{
float a,b,c;
char n;
std::cout<<"welcome you sir \n";
std::cout<<"enter two numbers\n";  
std::cout<<"first number=";
std::cin>>a;
std::cout<<"second number=";
std::cin>>b;
std::cout<<"enter\n1.addition\n2.substraction\n3.multiplication\n4.division\n ";
std::cin>>n;
switch(n)
{
case'1':c=a+b;
std::cout<<"sum is "<<c;
break;
case'2':c=a-b;
std::cout<<"difference is "<<c;
break;
case'3':c=a*b;
std::cout<<"product is "<<c;
break;
case'4':c=a/b;
std::cout<<"remainder is "<<c;
break;
default:
std::cout<<"invalid number";
break;
}
return 0;  
}

