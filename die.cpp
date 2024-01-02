#include <iostream>
#include <vector>
#include <map>

using namespace std;

int check(vector<int>& a, vector<int>& b, int k) {
    int count = 0;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            if (a[i] + b[j] == k) {
                count++;
            }
        }
    }
    return count;
}

int undoom_dice(vector<int>& diea, vector<int>& dieb) {
    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    map<int, int> mp, mina, minb;
    vector<int> ai, b;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 8; j++) {
            if (a[i] <= 4 && a[i] + a[j] == 2 && mp[a[j]] == 0) {
                mp[a[j]]++;
                mina[a[i]]++;
                ai.push_back(a[i]);
                b.push_back(a[j]);
            }
        }
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 8; j++) {
            if (a[i] <= 4 && a[i] + a[j] == 12 && mp[a[j]] == 0) {
                mp[a[j]]++;
                ai.push_back(a[i]);
                b.push_back(a[j]);
            }
        }
    }

    int count = 2;
    while (count != 0) {
        ai.push_back(3);
        ai.push_back(2);
        count--;
    }
    for (int i = 0; i < 8; i++)
        for (auto x : ai) {
            if (x + a[i] == 10 && mp[a[i]] == 0 && a[i] != 7) {
                b.push_back(a[i]);
            }
        }

    for (int i = 0; i < 8; i++)
        for (auto x : ai) {
            if (x + a[i] == 4 && mp[a[i]] == 0 && a[i] != 2) {
                b.push_back(a[i]);
            }
        }
    for (int i = 0; i < 8; i++)
        for (auto x : ai) {
            if (x + a[i] == 9 && mp[a[i]] == 0 && a[i] != 6 && a[i] != 7) {
                b.push_back(a[i]);
             //   b.push_back(4);
            }
        }

    for (int i = 0; i < 8; i++)
        for (auto x : ai) {
            if (x + a[i] == 5 && mp[a[i]] == 0 && a[i] != 3&&a[i]!=2) {
                b.push_back(a[i]);
            }
        }
    cout << "NEWDIE:" << endl;

    for (int i = 0; i < ai.size(); i++) {
        cout << ai[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    // cout << "Probability of Newdie Distribution:\n";
    // for (int i = 2; i <= 12; ++i) {
    //     int count = 0;

    //     for (int j = 0; j < ai.size(); ++j) {
    //         for (int k = 0; k < b.size(); ++k) {
    //             if (ai[j] + b[k] == i) {
    //                 count++;
    //             }
    //         }
    //     }

    //     cout << "P(Sum = " << i << ") = " << count << "/" << (ai.size() * b.size()) << " = " << static_cast<double>(count) / (ai.size() * b.size()) << "\n";
    // }

    return 0;
}

int parta() {
    int totalCombinations = 6 * 6;
    cout << "Total Combinations: " << totalCombinations << endl;

    vector<vector<int>> distribution(6, vector<int>(6, 0));

    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= 6; ++j) {
            distribution[i - 1][j - 1]++;
        }
    }

    cout << "Distribution of Combinations:\n";
    for (const auto& row : distribution) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    cout << "Probability of Sums:\n";
    for (int i = 2; i <= 12; ++i) {
        int count = 0;

        for (int j = 1; j <= 6; ++j) {
            for (int k = 1; k <= 6; ++k) {
                if (j + k == i) {
                    count++;
                }
            }
        }

        cout << "P(Sum = " << i << ") = " << count << "/" << totalCombinations << " = " << static_cast<double>(count) / totalCombinations << "\n";
    }
    return 0;
}

int main() {
    vector<int> Die_A = {1, 2, 3, 4, 5, 6};
    vector<int> Die_B = {1, 2, 3, 4, 5, 6};
    parta();
    undoom_dice(Die_A, Die_B);
}
