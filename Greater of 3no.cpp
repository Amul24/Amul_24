#include <iostream>
using namespace std;
int main()
{int n1,n2,n3;
cout<<"Enter the first no. ";
cin>>n1;
cout<<"Enter the second no.";
cin>>n2;
cout<<"Enter the third no. ";
cin>>n3;
if (n1>n2 && n1>n3)
{cout<<"n1 is greatest";
}
else if(n2>n1 &&n2>n3)
{cout<<"n2 is greater";
}
else
{cout<<"n3 is greater";
}

}
