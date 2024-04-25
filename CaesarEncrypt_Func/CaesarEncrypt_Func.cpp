#include <iostream>
#include <string>
#include <istream>

using namespace std;

string encrypt_caesar(string text, int code)
{
    string result;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {

            text[i] = (text[i] - 'A') + code;
            result += (text[i] % 26) + 'A';
        }
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = (text[i] - 'a') + code;
            result += (text[i] % 26) + 'a';
        }
        if (text[i] >= ' ' && text[i] < 'A' || text[i] > 'z' && text[i] <= '~') {
            result += text[i];
        }
    }
    return result;
}

int main() {
    string text;
    int code;

    cout << "Please, enter your text and encrypt code:\n";
    getline(cin, text); cin >> code;

    cout << encrypt_caesar(text, code);
}
