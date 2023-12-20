#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        // Input for each test case
        int a, b, xK, yK, xQ, yQ;
        cin >> a >> b >> xK >> yK >> xQ >> yQ;

        // Calculate the relative positions of the king and queen
        int dx = abs(xK - xQ);
        int dy = abs(yK - yQ);

        // Calculate the number of positions where a knight can attack both the king and queen
        int count = 0;

        // Check if the knight can attack both the king and queen
        // Knight's move can be represented as (a, b) or (b, a)
        // Check if the relative positions match the knight's move pattern
        if ((dx % a == 0 && dy % b == 0) || (dx % b == 0 && dy % a == 0)) {
            // Calculate the number of meeting points along the knight's path
            int meetingPointsAlongX = dx / a;
            int meetingPointsAlongY = dy / b;

            // Count the number of meeting points
            count = min(meetingPointsAlongX, meetingPointsAlongY);
        }

        cout << count << "\n";
    }

    return 0;
}
