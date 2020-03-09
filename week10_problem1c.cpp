#include <iostream>
using namespace std;

int main()
{
    int grades[6];
    int sum = 0;
    int min;
    int max;

    for(int i=0; i<6; i++){
        cout << "Grade " << i+1 << ": ";
        cin >> grades[i];
        sum += grades[i];

        if(i==0){
            min = grades[i];
            max = grades[i];
        }
        else if(min > grades[i]) min = grades[i];
        else if(max < grades[i]) max = grades[i];
    }

   cout << "Average: " << sum/6 << endl;
   cout << "Lowest grade: " << min << endl;
   cout << "Highest grade: " << max << endl;
}