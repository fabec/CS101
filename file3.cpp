#include <iostream>

using namespace std;

int main(){

	int num;
	cin >> num;
	int i_prev=0;
	int result;
	int t=1;
	int p=1;
	
	for(int i=1; i<num-1; i++){
		
		
		int n=p+t;
		
		t=p;
		p=n;
		result=n;
		
		}
		
		
	
	}
	
	cout << result << endl;

}
