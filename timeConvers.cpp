#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int f = stoi(s.substr(0,2));
    string l = s.substr(8,9);
    if (l == "AM" && f == 12){
        return "00" + s.substr(2,6);
    }
    else if (l == "PM" && f < 12){
        return to_string((f + 12)) + s.substr(2,6);
    }
    else {
        return s.substr(0,8);
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
