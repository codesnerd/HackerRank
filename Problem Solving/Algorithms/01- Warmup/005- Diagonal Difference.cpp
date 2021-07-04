// Problem: https://www.hackerrank.com/challenges/diagonal-difference/problem

int diagonalDifference(vector<vector<int>> arr) {
    int pri = 0, sec = 0, rows = arr.size();
    
    for (int i = 0, j = rows - 1; i < arr.size(); i++, j--)
    {
        pri += arr[i][i];
        sec += arr[i][j];
    }
    
    return abs(pri - sec);
}
