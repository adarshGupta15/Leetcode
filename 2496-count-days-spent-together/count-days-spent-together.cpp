class Solution {
public:
           int getDay(int month, int date, vector<int>& days) {
    int total = date;

    for (int i = 0; i < month - 1; i++) {
        total += days[i];
    }

    return total;
}
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int datealicearrive=stoi(arriveAlice.substr(3,2));
        int monthalicearrive=stoi(arriveAlice.substr(0,2));
        int datealiceleave=stoi(leaveAlice.substr(3,2));
        int monthaliceleave=stoi(leaveAlice.substr(0,2));

        int dateBobarrive=stoi(arriveBob.substr(3,2));
        int monthBobarrive=stoi(arriveBob.substr(0,2));
        int dateBobleave=stoi(leaveBob.substr(3,2));
        int monthBobleave=stoi(leaveBob.substr(0,2));

        vector<int> days = {31,28,31,30,31,30,31,31,30,31,30,31}; 


int aliceArrive = getDay(monthalicearrive, datealicearrive, days);
int aliceLeave  = getDay(monthaliceleave, datealiceleave, days);
int bobArrive   = getDay(monthBobarrive, dateBobarrive, days);
int bobLeave    = getDay(monthBobleave, dateBobleave, days);


int start = max(aliceArrive, bobArrive);
int end = min(aliceLeave, bobLeave);

return max(0, end - start + 1);

    }
};