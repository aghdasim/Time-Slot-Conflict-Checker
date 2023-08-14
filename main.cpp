#include <iostream>
#include <string>

using namespace std;

int main() {


    int i = 0, j = 0;

    int hs[4], he[4], ms[4], me[4];


    string timeRange[4];


    cout << "Please enter 4 timeslot of your programs :  (please use HH:MM-HH:MM format) " << endl;

    /// checking the size of input string,

    for (i = 0; i < 4; i++) {
        cin >> timeRange[i];
        int sizeCheck[4];
        sizeCheck[i] = (timeRange[i].size());

        if (sizeCheck[i] != 11) {
            cout << timeRange[i] << "  wrong format ";
            break;
        }
    }
    // HH = hs1 j=0

    /// convert Start times and End times of each slots, to minutes

    for (j = 0; j < 4; j++) {

        hs[j] = ((timeRange[j][0] - '0') * 10) + (timeRange[j][1] - '0');

        ms[j] = ((timeRange[j][3] - '0') * 10) + (timeRange[j][4] - '0');

        he[j] = ((timeRange[j][6] - '0') * 10) + (timeRange[j][7] - '0');

        me[j] = ((timeRange[j][9] - '0') * 10) + (timeRange[j][10] - '0');

        /// checking the input format is correct ( HH:MM-HH:MM)
        /// HH not be more than 23 , and MM not be more than 59

        bool checkFormat = true;


        if (!(timeRange[j][0] >= '0' && timeRange[j][0] <= '2' &&
              timeRange[j][1] >= '0' && timeRange[j][1] <= '9' &&
              timeRange[j][2] == ':' &&
              timeRange[j][3] >= '0' && timeRange[j][3] <= '5' &&
              timeRange[j][4] >= '0' && timeRange[j][4] <= '9' &&
              timeRange[j][5] == '-' &&
              timeRange[j][6] >= '0' && timeRange[j][6] <= '2' &&
              timeRange[j][7] >= '0' && timeRange[j][7] <= '9' &&
              timeRange[j][8] == ':' &&
              timeRange[j][9] >= '0' && timeRange[j][9] <= '5' &&
              timeRange[j][10] >= '0' && timeRange[j][10] <= '9') &&
            hs[j] <= 23 && ms[j] <= 59 && he[j] <= 23 && me[j] <= 59) {
            checkFormat = false;
        }
        if (!checkFormat) {
            cout << timeRange[j] << " ===== wrong Format ===== " << endl;
            return 0;
        }
    }

    /// checking the start time of the first slot with end time of its, and then
    /// checking the previous End time with the next Start times to find the conflicts.

    bool isConflict = false;

    for (j = 0; j < 4; j++) {

        if (j > 0 && (hs[j] * 60 + ms[j]) < (he[j - 1] * 60 + me[j - 1])) {
            isConflict = true;
            break;
        }
    }
    if (isConflict) {
        cout << "!!!!!!!  CONFLICT  !!!!!!!" << endl;
    }
    else  {
        cout << " **** CORRECT TIME PLANING ****";
    }


    return 0;
}