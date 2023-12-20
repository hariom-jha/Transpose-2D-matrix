#include <iostream>
#include <limits.h>
using namespace std;

int transposeOfArray(int arr[3][3], int row, int col, int transpose[3][3])
{
  cout << "Transpose of Array" << endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      transpose[j][i] == arr[i][j];
    }
  }
}

int printArray(int arr[][3], int row, int col)
{
  cout << "printing array" << endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j];
    }
    cout << endl;
  }
}
int main()
{
  int arr[3][3];
  int row = 3, col = 3;

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> arr[i][j];
    }
  }

  cout << "Printing the matrix array" << endl;

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j];
    }
  }

  int transpose[3][3];

  cout << "Array is" << printArray(arr, row, col) << endl;

  cout << "Transpose of matrix is" << transposeOfArray(arr, row, col, transpose) << endl;

  return 0;
}