#include <bits/stdc++.h>
using namespace std;

bool can_balance_string(string s, int max_replacements) {
    int unbalanced_pairs = 0;
    for (char c : s) {
        if (c == '<') {
            unbalanced_pairs++;
        } else if (c == '>') {
            unbalanced_pairs--;
            if (unbalanced_pairs < 0) {
                if (max_replacements == 0) {
                    return false;
                }
                max_replacements--;
                unbalanced_pairs = 1;
            }
        }
    }
    return unbalanced_pairs == 0;
}

vector<int> balancedOrNot(vector<string> expressions, vector<int> maxReplacements) {
    vector<int> arr;
    for (int i = 0; i < expressions.size(); i++) {
        arr.push_back(can_balance_string(expressions[i], maxReplacements[i]));
    }
    return arr;
}

void print(vector<int> arr) {
    for (auto i : arr) {
        cout << i << " ";
    }
}

int main() {
    vector<string> str = {"<>>>", "<>>>>"};
    vector<int> arr = {2, 2};

    print(balancedOrNot(str, arr));

    return 0;
}