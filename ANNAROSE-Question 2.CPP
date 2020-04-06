
#include<iostream.h> //wrong header file
#include<math.h>//missing header file
//turbo does not require namespace
int main(){
int num,d=0,n,r,p=0,a=1;
char choice;
cin>>num;      //wrong operator
cin>>choice;   //wrong operator
switch(choice)   //spelling mistake
{
case 'a':
	 n=num;
	 while(n==0)
	 {
	 n=n/10;
	 d++;
	 }
n=num;
while(n!=0)
{
r=n%10;
a=a*exp(r,d);//wrong operator and function name
n=n/10;
}
cout<<a<<"\n";
break;
case 'p':
	  n=num;
	  while(n!=0)
{
r=n%10;
p=p+10+r;//wrong operator
n=n/10;
}
cout<<p<<"\n";
break;
}
return 0;
}
/*
Sample input-1
152
p

Sample output-1
251
Sample input-2
534
a
Sample output-2
216
  */
