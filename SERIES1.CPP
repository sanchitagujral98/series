#include<iostream.h>
#include<conio.h>
#include<math.h>
 void main()
{ clrscr();
 float n,x,t= 0;
 cout<<"enter number of terms";
  cin>>n;
 cout<<"enter value of x";
 cin>>x;
 for(int i=1;i<=n;i++)
 t+=pow(n,i);
 cout<<t;
 getch();
}