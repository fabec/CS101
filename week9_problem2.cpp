#include <iostream>
using namespace std;

void mystery(int n)
{
	if(n < 10)
	{
	cout << n << endl;
	}else{
	cout << n%10 << endl;
	mystery(n/10);
	}
}

int main()
{
	int n;
	cin >> n;
	mystery(n);
}
