#include <iostream>
#include <vector>
using namespace std;
///brute force approach::
int main()
{
    // Original 2D vector
    vector<vector<int>> orignal = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // expected : {{7,4,1},{8,5,2},{9,6,3}}
    
    // Size of the matrix
    int n = orignal.size();

    // Resizing the 'ans' vector to have the same dimensions as 'orignal'
    vector<vector<int>> ans(n, vector<int>(n));

    // Printing the original matrix
    cout << "Original Matrix:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << orignal[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "|||||||||||||| ROTATED ||||||||||||||" << endl;

    // Rotating the matrix 90 degrees clockwise
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            ans[j][n - 1 - i] = orignal[i][j];
        }
    }

    // Printing the rotated matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
