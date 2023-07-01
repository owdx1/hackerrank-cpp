/*
When a contiguous block of text is selected in a PDF viewer, the selection is highlighted with a blue rectangle. In this PDF viewer, each word is highlighted independently. For example:

PDF-highighting.png

There is a list of  character heights aligned by index to their letters. For example, 'a' is at index  and 'z' is at index . There will also be a string. Using the letter heights given, determine the area of the rectangle highlight in  assuming all letters are  wide.

Example
 

The heights are  and . The tallest letter is  high and there are  letters. The hightlighted area will be  so the answer is .

Function Description

Complete the designerPdfViewer function in the editor below.

designerPdfViewer has the following parameter(s):

int h[26]: the heights of each letter
string word: a string
Returns

int: the size of the highlighted area
Input Format

The first line contains  space-separated integers describing the respective heights of each consecutive lowercase English letter, ascii[a-z].
The second line contains a single word consisting of lowercase English alphabetic letters.

Constraints

, where  is an English lowercase letter.
 contains no more than  letters.
Sample Input 0

1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
abc
Sample Output 0

9
Explanation 0

We are highlighting the word abc:

Letter heights are ,  and . The tallest letter, b, is  high. The selection area for this word is .

Note: Recall that the width of each character is .

Sample Input 1

1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 7
zaba
Sample Output 1

28
Explanation 1

The tallest letter in  is  at . The selection area for this word is . */
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'designerPdfViewer' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY h
 *  2. STRING word
 */

int designerPdfViewer(vector<int> h, string word) {
    int height = -1;
    int width = word.size();
    int currentNum = 0;
    for(int i = 0; i < word.size(); i++){
        switch (word[i]) {
            case 'a': currentNum = 0; break;
            case 'b': currentNum = 1; break;
            case 'c': currentNum = 2; break;
            case 'd': currentNum = 3; break;
            case 'e': currentNum = 4; break;
            case 'f': currentNum = 5; break;
            case 'g': currentNum = 6; break;
            case 'h': currentNum = 7; break;
            case 'i': currentNum = 8; break;
            case 'j': currentNum = 9; break;
            case 'k': currentNum = 10; break;
            case 'l': currentNum = 11; break;
            case 'm': currentNum = 12; break;
            case 'n': currentNum = 13; break;
            case 'o': currentNum = 14; break;
            case 'p': currentNum = 15; break;
            case 'q': currentNum = 16; break;
            case 'r': currentNum = 17; break;
            case 's': currentNum = 18; break;
            case 't': currentNum = 19; break;
            case 'u': currentNum = 20; break;
            case 'v': currentNum = 21; break;
            case 'w': currentNum = 22; break;
            case 'x': currentNum = 23; break;
            case 'y': currentNum = 24; break;
            case 'z': currentNum = 25; break;
            default: break;
        }
        if(h[currentNum] > height) height = h[currentNum];
    }
    
    
    return height * width;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string h_temp_temp;
    getline(cin, h_temp_temp);

    vector<string> h_temp = split(rtrim(h_temp_temp));

    vector<int> h(26);

    for (int i = 0; i < 26; i++) {
        int h_item = stoi(h_temp[i]);

        h[i] = h_item;
    }

    string word;
    getline(cin, word);

    int result = designerPdfViewer(h, word);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
