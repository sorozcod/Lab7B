#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
int numGPA;
  cout << "Enter the number of GPAs: ";
  cin >> numGPA;
  float gpa[numGPA];
  for (int i = 0; i < numGPA; i++) {
    cout << "GPA #" << i << ": ";
    cin >> gpa[i];
  }
  for (int s = 0; s < numGPA; s++) {
    cout << "Student #" << s << ": ";
    if (gpa[s] >= 3.90) {
      cout << "Summa Cum Laude";
    }else if(gpa[s] >= 3.70){
      cout << "Magna Cum Laude";
    }else if(gpa[s] >= 3.50){
      cout << "Cum Laude";
    }else if (gpa[s] >= 2.0){
      cout << "Graduating";
    }else{
      cout << "Not graduating";
    }
    cout << "\n";
  }

}