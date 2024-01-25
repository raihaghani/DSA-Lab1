#include <iostream>
using namespace std;

void inputMatrix(int** matrix, int x, int y );
void displayMatrix(int** matrix, int x, int y);
int sumOfElements(int** matrix, int x, int y);
void displayRowSum(int** matrix, int x, int y);
void displayColSum(int** matrix, int x, int y);
void transposeMatrix(int** matrix, int x, int y);

int main() 
{
    int x, y;
     cout << "Enter the number of rows ";
     cin >> x;
     cout << "Enter the number of columns ";
     cin >> y;

    int** matrix = new int* [x];

    for (int i = 0; i < x; ++i)
    {
        matrix[i] = new int[y];
    }

    int c;

    do {
        
         cout << "Menu:"<<endl;
         cout << "1. Input elements "<<endl;
         cout << "2. Display elements "<<endl;
         cout << "3. Sum of all elements "<<endl;
         cout << "4. Display row-wise sum "<<endl;
         cout << "5. Display column-wise sum "<<endl;
         cout << "6. Create transpose "<<endl;
         cout << "0. Exit"<<endl;

  
         cout << "Enter choice: ";
         cin >> c;
        switch (c) 
        {
        case 1:
            inputMatrix(matrix, x, y);
            break;
        case 2:
            displayMatrix(matrix, x, y);
            break;
        case 3:
             cout << "Sum of all elements: " << sumOfElements(matrix, x, y) <<  endl;
            break;
        case 4:
            displayRowSum(matrix, x, y);
            break;
        case 5:
            displayColSum(matrix, x, y);
            break;
        case 6:
            transposeMatrix(matrix, x, y);
            break;
        case 0:
             cout << "Exit program."<<endl;
            break;
        default:
             cout << "Invalid choice. Please try again."<<endl;
        }

    }
    while (c != 0);

    for (int i = 0; i < x; ++i) 
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

void inputMatrix(int** matrix, int x, int y) 
{
     cout << "Enter elements of the matrix:"<<endl;
    for (int i = 0; i < x; ++i) 
    {
        for (int j = 0; j < y; ++j) 
        {
             cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
             cin >> matrix[i][j];
        }
    }
}


void displayMatrix(int** matrix, int x, int y)
{
     cout << "Matrix elements:"<<endl;
    for (int i = 0; i < x; ++i) 
    {
        for (int j = 0; j < y; ++j) 
        {
             cout << matrix[i][j] << "\t";
        }
         cout <<  endl;
    }
}

int sumOfElements(int** matrix, int x, int y)
{
    int sum = 0;
    for (int i = 0; i < x; ++i) 
    {
        for (int j = 0; j < y; ++j) 
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

void displayRowSum(int** matrix, int x, int y)
{
     cout << "Row-wise sum of matrix:"<<endl;
    for (int i = 0; i < x; ++i) 
    {
        int rowSum = 0;
        for (int j = 0; j < y; ++j) 
        {
            rowSum += matrix[i][j];
        }
         cout << "Row " << i + 1 << ": " << rowSum <<  endl;
    }
}
void displayColSum(int** matrix, int x, int y) 
{
     cout << "Column-wise sum of matrix:"<<endl;
    for (int j = 0; j < x; ++j) 
    {
        int colSum = 0;
        for (int i = 0; i < y; ++i)
        {
            colSum += matrix[i][j];
        }
         cout << "Column " << j + 1 << ": " << colSum <<  endl;
    }
}

void transposeMatrix(int** matrix, int x, int y) 
{
     cout << "Transpose of matrix:"<<endl;
    for (int j = 0; j < x; ++j) 
    {
        for (int i = 0; i < y; ++i) 
        {
             cout << matrix[i][j] << "\t";
        }
         cout <<  endl;
    }
}
