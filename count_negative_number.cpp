#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        
        // Start from top-right corner
        int row = 0, col = n - 1;
        
        while (row < m && col >= 0) {
            if (grid[row][col] < 0) {
                // All elements to the left (in the same row) are also negative
                count += (m - row);
                col--; // Move left in the same row
            } else {
                row++; // Move down to the next row
            }
        }
        
        return count;
    }
};