// Problem: https://www.hackerrank.com/challenges/divisible-sum-pairs/problem

//* O(n²)
int divisibleSumPairs(int n, int k, vector<int> ar)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if ((ar[i] + ar[j]) % k == 0)
                count++;

    return count;
}

//* O(n) Hashmap Solution:
int divisibleSumPairs(int n, int k, vector<int> ar)
{
    int count = 0;
    unordered_map<int, int> rfmap; //remainder frequency map

    for (int i = 0; i < ar.size(); i++)
    {
        int rem = ar[i] % k;
        int complement = k - rem == k ? 0 : k - rem; //if complement is a factor of k, then store 0 instead of complement

        if (rfmap.find(complement) != rfmap.end()) //complement is present in map
            count += rfmap[complement];

        if (rfmap.find(rem) != rfmap.end())
            rfmap[rem]++;
        else
            rfmap.insert({ rem, 1 });
    }

    return count;
}
