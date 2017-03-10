#include<iostream.h>
#include<conio.h>
#include<math.h>
 void main()
{ clrscr();
  int n;
  float x,t= 0.0;
  cout<<"enter number of terms";
  cin>>n;
  cout<<"enter value of x";
  cin>>x;
  for (int i=1;i<=n;i++)
  t+=(pow(x,i)/i);
  cout<<"total="<<t;
  getch();
}