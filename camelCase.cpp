#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s) {
    int len = s.size();
    if (len == 0) return 0;
    int totalWords = 1;
    for(int i = 0; i < len; i++){
        if (s[i] >= 65 && s[i] <= 90){
            totalWords++;
        }
    }
    
    return totalWords;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s) {
    int len = s.size();
    if (len == 0) return 0;
    int totalWords = 1;
    for(int i = 0; i < len; i++){
        if (s[i] >= 65 && s[i] <= 90){
            totalWords++;
        }
    }
    
    return totalWords;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
