#include <bits/stdc++.h>
using namespace std;

int findMinDifference(vector<string>& timePoints) {
        int n=timePoints.size();
        string s1=":";
        for(int i = 0; i < n; i++) {
            size_t pos = timePoints[i].find(":");
            if (pos != string::npos) {
                timePoints[i].erase(pos, 1);
            }
        }
        sort(timePoints.begin(), timePoints.end());
        int minDiff = INT_MAX;
        for(int i = 0; i < n; i++) {
            int h1 = stoi(timePoints[i].substr(0, 2));
            int m1 = stoi(timePoints[i].substr(3, 2));
            int h2 = stoi(timePoints[(i + 1) % n].substr(0, 2));
            int m2 = stoi(timePoints[(i + 1) % n].substr(2, 2));

            int diff = (h2 - h1) * 60 + (m2 - m1);
            if (diff < 0) {
                diff += 24 * 60; 
            }
            minDiff = min(minDiff, diff);
        }
        return minDiff;
    }
int main() {
    vector<string> timePoints;
    string input;
    cout << "Enter time points (HH:MM format, separated by spaces): ";
    getline(cin, input);
    stringstream ss(input);
    string timePoint;
    
    while (ss >> timePoint) {
        timePoints.push_back(timePoint);
    }
    
    int result = findMinDifference(timePoints);
    
    if (result == -1) {
        cout << "Invalid time format detected." << endl;
    } else {
        cout << "Minimum time difference: " << result << " minutes" << endl;
    }
    
    return 0;
}