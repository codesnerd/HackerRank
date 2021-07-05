// Problem: https://www.hackerrank.com/challenges/birthday-cake-candles/problem

int birthdayCakeCandles(vector<int> candles)
{
    return count(candles.begin(), candles.end(), *max_element(candles.begin(), candles.end()));
}

//* O(n)

int birthdayCakeCandles(vector<int> candles) {
    int max = candles[0], count = 0;
    
    for (int i = 0; i < candles.size(); i++) {
         if (candles[i] > max)
            max = candles[i];
    }
    
    for (int i = 0; i < candles.size(); i++) {
        if (candles[i] == max)
            count++;
    }
    
    return count;
}
