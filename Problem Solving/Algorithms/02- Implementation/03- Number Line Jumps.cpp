//Problem: https://www.hackerrank.com/challenges/kangaroo/problem

string kangaroo(int x1, int v1, int x2, int v2) {
    string willMeet = "NO";

    if (v2 < v1)
        if ((x2 - x1) % (v1 - v2) == 0)
            willMeet = "YES";

    return willMeet;
}