#include "array.hpp"

void processArray(double arr[][100], int row, int col){
  
  for(int i = 0; i < row; i++){
    cout << endl;
    for(int j = 0; j < col; j++){
      cout << arr[i][j] << " ";
    }
  }
  cout << endl;
}