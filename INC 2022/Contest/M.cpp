#include <bits/stdc++.h>
using namespace std;

int getMaxValue(int a, int b) {
    if (a > b) return a;
    return b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    vector <int> obstacle;
    int tempObstacle = 1;
    int happinessTemp = 0;
    int happiness = 0;
    for (int i = 0; i < tc; i++) {
        int number;
        cin >> number;
        if (i == 0) {
            tempObstacle = number;
        }
        cout << "iterasi ke " << i + 1 << endl;
        if (number > 0) {
            if (abs(tempObstacle - number) == 2 || abs(tempObstacle - number) == 0) {
                // cout << getMaxValue(happiness, happinessTemp) << " max \n";
                happinessTemp++;
                cout << tempObstacle << " " << number << " tambah 1a" << endl;
            }
            else {
                happiness = getMaxValue(happiness, happinessTemp);
                happinessTemp = 1;
                cout << "reset" << endl;
            }
            tempObstacle = number;
        }
        else {
            happinessTemp++;
            cout << "yes " << tempObstacle << " " << happinessTemp << " " << number << " tambah 1b" << endl;
        }
        cout << happinessTemp << " " << happiness << " " << tempObstacle << " " << number << endl << endl;
        // if (i % 2 == 0) {
        //     if (i != 0) {
        //         // cout << "yes" << tempObstacle << " " << number << "hoho" << abs(tempObstacle - number) << endl;
        //         if (abs(tempObstacle - number) == 0 || abs(tempObstacle - number) == 2) {
        //             cout << tempObstacle << " " << number << endl;
        //             // happiness++;
        //         }
        //         else {
        //             cout << getMaxValue(happiness, happinessTemp);
        //             happiness = getMaxValue(happiness, happinessTemp);
        //             happinessTemp = 1;
        //         }
        //     }
        //     tempObstacle = number;
        // }
        // else {
        //     happinessTemp++;
        //     cout << "yes " << tempObstacle << " " << happinessTemp << " " << number << endl;
        // }
    }
    if (happinessTemp > happiness) happiness = happinessTemp;
    cout << endl << happiness;
}
