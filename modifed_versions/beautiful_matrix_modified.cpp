// Suppose you have a matrix[M][N], there you have all the fields with value 0 and there is only one field whose value is 1, Calculate the mon no of moves needed so as to make the matrix beautiful by placing the value of  at the middle. 

#include <iostream>
#include <cmath>
#include<climits>
using namespace std;

int main()
{
    int M, N;
    cout << "Enter the number of rows: ";
    cin >> M;
    cout << "Enter the number of columns: ";
    cin >> N;

    int a[M][N], i, j;
    int center_row = M / 2;
    int center_col = N / 2;
    int min_moves = INT_MAX;  // Initialize with a large value

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> a[i][j];

            if (a[i][j] == 1)
            {
                int moves = abs(center_row - i) + abs(center_col - j);
                if (moves < min_moves)
                    min_moves = moves;
            }
        }
    }

    cout << "Minimum moves required: " << min_moves << endl;
    return 0;
}
