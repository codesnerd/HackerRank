// Problem: https://www.hackerrank.com/challenges/time-conversion/problem

string timeConversion(string s)
{
    string newtime = s.substr(0, 8);
    char zone = s[8];
    int hr = stoi(newtime.substr(0, 2));
    
    if (hr == 12 && zone == 'A')
        newtime.replace(0, 2, "00");
    else if ((hr >= 1 && hr <= 11) && zone == 'P')
    {
        hr += 12;
        newtime.replace(0, 2, to_string(hr));
    }
    
    //if time is a.m. or 12 p.m, it will be returned as is
    return newtime;
}
