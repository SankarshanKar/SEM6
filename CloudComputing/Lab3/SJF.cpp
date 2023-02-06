#include <bits/stdc++.h>
using namespace std;

struct Process {
    int processNo;
    int burstTime;
    int arrivalTime;
    int waitingTime;
    int turnAroundTime;
    int completionTime;
};

bool comparatorAT(Process a, Process b) {
    if (a.arrivalTime == b.arrivalTime) {
        return (a.processNo < b.processNo);
    }
    return (a.arrivalTime < b.arrivalTime);
}

bool comparatorPNo(Process a, Process b) {
    return (a.processNo < b.processNo);
}

void inputData(vector<Process>& arr) {
    // vector<int> at = {2, 5, 1, 0, 4};
    // vector<int> bt = {6, 2, 8, 3, 4};
    vector<int> at = {1, 2, 3, 4, 5};
    vector<int> bt = {7, 5, 1, 2, 8};
    for (int i = 0; i < 5; i++) {
        Process task;
        task.processNo = i + 1;
        task.arrivalTime = at[i];
        task.burstTime = bt[i];
        arr.push_back(task);
    }
}

void shortestJobFirst(vector<Process>& arr) {
    sort(arr.begin(), arr.end(), comparatorAT);
    int time = 0;
    time += arr[0].arrivalTime;

    for (int i = 0; i < arr.size(); i++) {
        time += arr[i].burstTime;
        arr[i].completionTime = time;
        arr[i].turnAroundTime = arr[i].completionTime - arr[i].arrivalTime;
        arr[i].waitingTime = arr[i].turnAroundTime - arr[i].burstTime;

        if (time < arr[i + 1].arrivalTime) {
            int t = arr[i + 1].arrivalTime - time;
            time = time + t;
        }
    }
}

void display(vector<Process> arr) {
    sort(arr.begin(), arr.end(), comparatorPNo);
    cout << "PNo.\tAT\tBT\tCT\tWT\tTAT\n";
    int totalTAT = 0, totalWT = 0;
    for (auto i : arr) {
        cout << i.processNo << "\t" << i.arrivalTime << "\t" << i.burstTime << "\t" << i.completionTime << "\t" << i.waitingTime << "\t" << i.turnAroundTime << endl;
        totalTAT += i.turnAroundTime;
        totalWT += i.waitingTime;
    }
    cout << "Average Turn Around Time: " << totalTAT / arr.size() << endl;
    cout << "Average Wainting Time: " << totalWT / arr.size() << endl;
}

int main() {
    vector<Process> arr;

    inputData(arr);
    shortestJobFirst(arr);
    display(arr);

    return 0;
}