#include <iostream>
using namespace std;
class evodd{
	public:
		void  eveodd(int n){
			if(n%2==0){
				cout<<"The n is even";
			}
			else{cout<<"The n is odd";
			}
		};
};
int main()
{	int n,s;
cin>>n;
evodd obj;
obj.eveodd(n);

}
