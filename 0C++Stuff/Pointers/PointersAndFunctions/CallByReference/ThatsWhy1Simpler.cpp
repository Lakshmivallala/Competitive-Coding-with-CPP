#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void Sw(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;

	cout<<"Inside f() "<<*a<<" "<<* b <<endl; //20 10
}

int main()
{
  int a =10;
  int b=20;
  

  cout<<"Before f() "<<a<<" "<<b<<endl; //10 20
  Sw(&a,&b);
  cout<<"after f() "<<a<<" "<<b<<endl; //20 10

  return 0;
}