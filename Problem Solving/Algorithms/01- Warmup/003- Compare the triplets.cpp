// Problem: https://www.hackerrank.com/challenges/compare-the-triplets/problem

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int pointsA = 0, pointsB = 0;
    for (int i = 0; i < a.size(); i++) //a.size() = b.size() = 3
    {
        if (a[i] > b[i])
            pointsA++;
        else if (a[i] < b[i])
            pointsB++;
    }
    
    return {pointsA, pointsB};
}
