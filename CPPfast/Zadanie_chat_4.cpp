#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

bool UniqueOccurrences(const vector<int>& A) {
    unordered_map<int, int> freq;

    // 1. Zliczamy wystąpienia każdej liczby
    for (int num : A) {
        freq[num]++;
    }

    set<int> seen;

    // 2. Sprawdzamy, czy liczby wystąpień są unikalne
    for (auto& [key, value] : freq) {
        if (seen.count(value)) {
            return false; // już taka liczba wystąpień była
        }
        seen.insert(value);
    }

    return true;
}

int main() {
    vector<int> A1 = {1, 2, 2, 1, 1, 3};
    vector<int> A2 = {1, 2, 2, 3, 3};

    cout << boolalpha;
    cout << "A1: " << UniqueOccurrences(A1) << endl;  // true
    cout << "A2: " << UniqueOccurrences(A2) << endl;  // false

    return 0;
}

