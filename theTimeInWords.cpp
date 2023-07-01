/* Given the time in numerals we may convert it into words, as shown below:

At , use o' clock. For , use past, and for  use to. Note the space between the apostrophe and clock in o' clock. Write a program which prints the time in words for the input given in the format described.

Function Description

Complete the timeInWords function in the editor below.

timeInWords has the following parameter(s):

int h: the hour of the day
int m: the minutes after the hour
Returns

string: a time string as described
Input Format

The first line contains , the hours portion The second line contains , the minutes portion

Constraints

Sample Input 0

5
47
Sample Output 0

thirteen minutes to six
Sample Input 1

3
00
Sample Output 1

three o' clock
Sample Input 2

7
15
Sample Output 2

quarter past seven
*/

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'timeInWords' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER h
 *  2. INTEGER m
 */

string timeInWords(int h, int m) {
    string term1;
    
    if (m > 30){
        term1 = "to";
        if (h == 12){
            h = 1;
        }
        else {
            h = h + 1;
        }
        m = 60 - m;
    }
    else {
        term1 = "past";
        h = h;
    } 
    string minutes;
    switch(m){
        case 0: minutes = "o' clock"; break;
        case 1: minutes = "one minute"; break;
        case 2: minutes = "two minutes"; break;
        case 3: minutes = "three minutes"; break;
        case 4: minutes = "four minutes"; break;
        case 5: minutes = "five minutes"; break;
        case 6: minutes = "six minutes"; break;
        case 7: minutes = "seven minutes"; break;
        case 8: minutes = "eight minutes"; break;
        case 9: minutes = "nine minutes"; break;
        case 10: minutes = "ten minutes"; break;
        case 11: minutes = "eleven minutes"; break;
        case 12: minutes = "twelve minutes"; break;
        case 13: minutes = "thirteen minutes"; break;
        case 14: minutes = "fourteen minutes"; break;
        case 15: minutes = "quarter"; break;
        case 16: minutes = "sixteen minutes"; break;
        case 17: minutes = "seventeen minutes"; break;
        case 18: minutes = "eighteen minutes"; break;
        case 19: minutes = "nineteen minutes"; break;
        case 20: minutes = "twenty minutes"; break;
        case 21: minutes = "twenty one minutes"; break;
        case 22: minutes = "twenty two minutes"; break;
        case 23: minutes = "twenty three minutes"; break;
        case 24: minutes = "twenty four minutes"; break;
        case 25: minutes = "twenty five minutes"; break;
        case 26: minutes = "twenty six minutes"; break;
        case 27: minutes = "twenty seven minutes"; break;
        case 28: minutes = "twenty eight minutes"; break;
        case 29: minutes = "twenty nine minutes"; break;
        case 30: minutes = "half";  break;
    }   
    
    string hour;
    switch(h){
        case 1: hour = "one"; break;
        case 2: hour = "two"; break;
        case 3: hour = "three"; break;
        case 4: hour = "four"; break;
        case 5: hour = "five"; break;
        case 6: hour = "six"; break;
        case 7: hour = "seven"; break;
        case 8: hour = "eight"; break;
        case 9: hour = "nine"; break;
        case 10: hour = "ten"; break;
        case 11: hour = "eleven"; break;
        case 12: hour = "twelve"; break;
    } 
    
    string res;
    if (m == 0){
        res = hour + " " + minutes;
    }
    else {
        res = minutes + " " + term1 + " " + hour;
    }
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string h_temp;
    getline(cin, h_temp);

    int h = stoi(ltrim(rtrim(h_temp)));

    string m_temp;
    getline(cin, m_temp);

    int m = stoi(ltrim(rtrim(m_temp)));

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
