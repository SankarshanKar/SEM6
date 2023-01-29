#include <bits/stdc++.h>
using namespace std;

int timeQuantum = 2;

struct Process {
    int processNo;
    int burstTime;
    int arrivalTime;
    int waitingTime;
    int turnAroundTime;
    int completionTime;
};

void inputData(vector<Process>& tasks) {
    vector<int> bt = {5, 4, 2, 1};
    vector<int> at = {0, 1, 2, 4};
    for (int i = 0; i < bt.size(); i++) {
        Process task;
        task.processNo = i + 1;
        task.arrivalTime = at[i];
        task.burstTime = bt[i];
        tasks.push_back(task);
    }
}

void calculateWaiting(vector<Process> tasks) {
    vector<int> remainingBurstTime;
    for (int i = 0; i < tasks.size(); i++) {
        remainingBurstTime.push_back(tasks[i].burstTime);
    }
    int t = 0;

    while (1) {
        bool done = true;

        for (int i = 0; i < tasks.size(); i++) {
            if (remainingBurstTime[i] > 0) {
                done = false;
                if (remainingBurstTime[i] > timeQuantum) {
                    t += timeQuantum;
                    remainingBurstTime[i] -= timeQuantum;
                }
                else {
                    t += remainingBurstTime[i];
                    tasks[i].waitingTime = t - tasks[i].burstTime;
                    remainingBurstTime[i] = 0;
                }
            }
        }
        if (done == true) {
            break;
        }
    }
}

void calculateTurnAroundTime(vector<Process> tasks) {
    for (int i = 0; i < tasks.size(); i++) {
        tasks[i].turnAroundTime = tasks[i].burstTime + tasks[i].waitingTime;
    }
}

void display(vector<Process> arr) {
    for (auto i : arr) {
        cout << i.processNo << " " << i.arrivalTime << " " << i.burstTime << " " << i.waitingTime << " " << i.turnAroundTime << endl;
    }
}

int main() {
    vector<Process> tasks;

    inputData(tasks);
    display(tasks);

    return 0;
}