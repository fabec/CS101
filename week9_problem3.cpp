#include <iostream>
using namespace std;

unsigned long long int power(int n, int x)
{
	if(x==2) return n*n;
	else return n * power(n, --x);
}

int main()
{
	int n;
	cin >> n;
	int m;
	cin >> m;
	cout << power(n, m) << endl;
}
