//Problem: https://www.hackerrank.com/challenges/apple-and-orange/problem

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int countA = 0, countO = 0;

    for (int i = 0; i < apples.size(); i++)
        if (a + apples[i] >= s && a + apples[i] <= t)
            countA++;

    for (int i = 0; i < oranges.size(); i++)
        if (b + oranges[i] <= t && b + oranges[i] >= s)
            countO++;

    cout << countA << "\n" << countO;
}