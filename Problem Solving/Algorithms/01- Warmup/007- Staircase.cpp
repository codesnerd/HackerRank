Problem: https://www.hackerrank.com/challenges/staircase/problem

void staircase(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int space = n - i - 1; space > 0; space--)
            cout << " ";
        for (int star = 0; star <= i; star++)
            cout << "#";

        cout << endl;
    }
}