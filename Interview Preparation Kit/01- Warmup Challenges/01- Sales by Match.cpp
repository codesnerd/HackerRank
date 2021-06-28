// Problem: https://www.hackerrank.com/challenges/sock-merchant/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup

//* Array based Solution:

int sockMerchant(int n, vector<int> ar)
{
    const int size = 101; // given 1 <= ar[i] <= 100
    int pairs[size] = {};
    int count = 0;

    for (int i = 0; i < ar.size(); i++)
        pairs[ar[i]]++;

    for (int i = 0; i < size; i++)
        if (pairs[i] != 0 && pairs[i] != 1)
            count += pairs[i] / 2;

    return count;
}

//* Set based Solution:

int sockMerchant(int n, vector<int> ar)
{
    unordered_set<int> socks;
    int matched = 0;

    for (int i = 0; i < ar.size(); i++)
    {
        if (socks.find(ar[i]) != socks.end()) //sock is already there
        {
            socks.erase(ar[i]);
            matched++;
        }
        else
            socks.insert(ar[i]);
    }

    return matched;
}