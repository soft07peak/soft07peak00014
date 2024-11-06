//question 1:#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int arr1[rows][cols], arr2[rows][cols], sum[rows][cols];

    cout << "Enter elements of first array:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> arr1[i][j];

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> arr2[i][j];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            sum[i][j] = arr1[i][j] + arr2[i][j];

    cout << "Sum of the arrays:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    return 0;
}



//question 2:
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    int matrix[n][n];
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    cout << "Diagonal elements are:\n";
    for (int i = 0; i < n; i++)
        cout << matrix[i][i] << " ";
    cout << endl;

    return 0;
}




//question 3:
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    int matrix[n][n];
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < n; i++)
        sum += matrix[i][i];

    cout << "Sum of diagonal elements: " << sum << endl;

    return 0;
}


//question 4:
#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Enter dimensions (x y z) for the arrays: ";
    cin >> x >> y >> z;

    int arr1[x][y][z], arr2[x][y][z], product[x][y][z];

    cout << "Enter elements of first array:\n";
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            for (int k = 0; k < z; k++)
                cin >> arr1[i][j][k];

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            for (int k = 0; k < z; k++)
                cin >> arr2[i][j][k];

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            for (int k = 0; k < z; k++)
                product[i][j][k] = arr1[i][j][k] * arr2[i][j][k];

    cout << "Product of the arrays:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++)
                cout << product[i][j][k] << " ";
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}




//question 5:#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[rows][cols], transpose[cols][rows];

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            transpose[j][i] = matrix[i][j];

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++)
            cout << transpose[i][j] << " ";
        cout << endl;
    }

    return 0;
}