#include<iostream>
using namespace std;

namespace NS1
{
	int i;
	namespace NS2
	{
		int j;
	}
}

int main()
{
	NS1::i=19;
	NS1::NS2::j=15;

	cout<<NS1::i<<" "<<NS1::NS2::j<<"\n";

	using namespace NS1;
	cout<<i*NS2::j<<endl;

	return 0;
}
