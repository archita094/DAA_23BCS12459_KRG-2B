#include <iostream>
#include <string>
using namespace std;

void searchPattern(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();
    bool found = false;

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++)
            if (text[i + j] != pattern[j])
                break;
        if (j == m) {
            cout << "Pattern found at index " << i << endl;
            found = true;
        }
    }
    if (!found)
        cout << "Pattern not found in text.\n";
}

int main() {
    string text, pattern;
    cout << "Enter text: ";
    getline(cin, text);
    cout << "Enter pattern: ";
    getline(cin, pattern);

    searchPattern(text, pattern);
    cout << "Time Complexity: O((n - m + 1) * m)\n";
    return 0;
}
