#include "array.hpp"

void addition(double arr1[][100], double arr2[][100], double arr3[][100], int row, int col){
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      arr3[i][j] = arr1[i][j] + arr2[i][j];
    }
  }
}