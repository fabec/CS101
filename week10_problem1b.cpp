#include <iostream>
using namespace std;

int main()
{
    int grades[6];

    for(int i=0; i<6; i++){
        cout << "Grade " << i+1 << ": ";
        cin >> grades[i];
    }

    for(int i=0; i<6; i++)
        cout << grades[i] << " ";

    cout << endl;
}