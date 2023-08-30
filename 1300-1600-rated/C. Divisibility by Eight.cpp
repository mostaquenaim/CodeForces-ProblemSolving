#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    string n;
    cin >> n;

    int arr[10] = {0};
    int newArr = -1;
    int odd = 0;
    bool flag = true;

    for (int i = 0; i < n.length(); i++) {
        int x = n[i];
        arr[x]++;
        if (x % 2 != 0) odd++;
    }

    for (int i = n.length() - 1; i >= 0; i--) {
        if (flag) {
            int x = n[i] - '0';

            if (x % 2 != 0) {
                if (newArr != -1) {
                    if ((x * 10 + newArr) % 8 == 0) {
                        cout << "YES\n" << x << newArr << endl;
                        flag = false;
                        break;
                    } else if ((x * 10 + newArr) % 4 == 0 && odd - 1 != 0) {
                        for (int j = i - 1; j >= 0; j--) {
                            if (n[j] % 2 != 0) {
                                cout << "YES\n" << n[j] - '0' << x << newArr << endl;
                                flag = false;
                                break;
                            }
                        }
                    } else {
                        odd--;
                    }
                } else {
                    odd--;
                }
            } else if (x % 2 == 0) {
                if (x % 8 == 0) {
                    cout << "YES\n" << x << endl;
                    flag = false;
                } else if (newArr == -1) {
                    newArr = x;
                } else if ((x * 10 + newArr) % 8 == 0) {
                    cout << "YES\n" << x << newArr << endl;
                    flag = false;
                    break;
                } else if ((x * 10 + newArr) % 4 == 0 && odd != 0) {
                    for (int j = i - 1; j >= 0; j--) {
                        if (n[j] % 2 != 0) {
                            cout << "YES\n" << n[j] - '0' << x << newArr << endl;
                            flag = false;
                            break;
                        }
                    }
                }
            }
        } else {
            break;
        }
    }

    if (flag) {
        cout << "NO" << endl;
    }

    return 0;
}