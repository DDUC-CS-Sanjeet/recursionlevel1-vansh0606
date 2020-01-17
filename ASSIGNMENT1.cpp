#include<iostream>
using namespace std;
int fact(int n);
int gcd(int a ,int b);
int GCD(int a,int b);
int Fact(int n);
int fib(int n);
void FIB(int n);
int power(int c,int d);
int POWER(int c,int d);
int main()
{   char ch;
	int n;
     do{
	  cout<<"---------------MENU--------------"<<endl;
	  cout<<"1 for Euclid's algorithm for gcd of two numbers num1 and num2"<<endl;
	  cout<<"2 for Factorial of a nunber num"<<endl;
	  cout<<"3 for  number num1 raised to power another number num2"<<endl;
	  cout<<"4 for First num terms of Fibonacci sequence."<<endl;
      cout<<"enter your choice"<<endl;
      cin>>n;
      switch(n)
      {
	   case 1:
       int a,b,gcd1;
       cout << "Enter two numbers: for GCD ";
       cin >> a >>b ;
       cout << "gcd without using recursion is = " << GCD(a,b)<<endl;
       // with recursion    
       cout << "gcd using recursion is = " << gcd(a,b)<<endl;
        break;
    	case 2:
		int i,n,f;
	    f=1;
	    cout<<"enter a num for factorial ";
	    cin>>n;
     	 cout<<"factorial of "<<n<<" using recursion is "<<fact(n)<<endl;
	    cout<<"factorial of "<<n<<" without using recursion is "<<Fact(n)<<endl;
	    break;
	    case 3:
        int c,d;
        cout<<"enter c for number and d for its power ";
        cin>>c>>d;
        cout<<"c to the power d without using recursion is "<<POWER(c,d)<<endl;
	    cout<<"c to the power d using recursion is "<<power(c,d);
	    break;
	    case 4:
	    int num;
        cout<<"enter N for Fibonacci Series "<<endl;
        cin>>num;
        cout<<"First num terms of Fibonacci sequence using recursion is "<<endl;
        for(i=0;i<num;i++)
         {
        	cout<<fib(i);
         }
        cout<<endl<<"First num terms of Fibonacci sequence without using recursion is ";
        FIB(num);
        break;
        default :
        	cout<<"invalid choice";
        } cout<<endl<<"do you want to enter again y/n"<<endl;
          cin>>ch;
        }	while(ch=='y'||ch=='Y');   	
} 
    // GCD without using recursion 
 int GCD(int a,int b)
 {
    for(;b!=0;)
    {
    	int t=b;
    	b=a%b;
    	a=t;
	}
	return a;
   
 }//  GCD using recursion 
 int gcd(int a, int b)
    {
    	
      if (b != 0)
      return gcd(b, a % b);
      else 
      return a;
    }
 // using recursion 
 int power(int c,int d)
 {
 	if(d==0)
 	return 1;
 	else
    return (c*power(c,d-1));
}
    // without using recursion 
   int POWER(int c,int d)
    {
    	int p,g=1;
	for(p=1;p<=d;p++)
	{ 
	  g=c*g	;
	} return g;
	}
// using recursion 
int fact(int n)
{
	if(n==0||n==1)
	return 1;
	else
	return(n*fact(n-1));
}// without using recursion 
int Fact(int n)
{ int i,f=1;
 for(i=1;i<=n;i++)
	{
		f=f*i; 
    }
	 return f;
}// using recursion 
int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
        else
    return fib(n-1) + fib(n-2); 
} 
// without using recursion
void FIB( int n)
{
	 int x=0,y=1,z;
	for(int i=0;i<n;i++)
	{
		cout<<x<<" ";
		z=x+y;
		x=y;
		y=z;
	}
 } 
