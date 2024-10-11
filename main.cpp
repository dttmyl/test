#include "array.hpp"
#include <iostream>

double arr1[10][100];
double arr2[10][100];
double arr3[10][100];


int main() {

  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
      arr1[i][j] = 5;
      arr2[i][j] = 5;
    }
  }
  cout << "array 1: " << endl;
  processArray(arr1, 10, 10);
  cout << "array 2: " << endl;
  processArray(arr2, 10, 10);
  addition(arr1, arr2, arr3, 10, 10);
  cout << "array 3: " << endl;
  processArray(arr3, 10, 10);
  
  
}