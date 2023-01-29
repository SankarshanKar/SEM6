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

bool comparator(Process a, Process b) {
    return (a.arrivalTime < b.arrivalTime);
}

bool comparator2(Process a, Process b) {
    return (a.processNo < b.processNo);
}

void inputData(vector<Process>& tasks) {
    vector<int> bt = {6, 2, 8, 3, 6};
    vector<int> at = {2, 5, 1, 0, 4};
    for (int i = 0; i < bt.size(); i++) {
        Process task;
        task.processNo = i + 1;
        task.arrivalTime = at[i];
        task.burstTime = bt[i];
        tasks.push_back(task);
    }
}

void calculateTime(vector<Process>& tasks) {
    int sum = 0;
    sum = sum + tasks[0].arrivalTime;
    
    for(int i = 0; i < tasks.size(); i++) {
        sum = sum + tasks[i].burstTime;
        tasks[i].completionTime = sum;
        tasks[i].turnAroundTime = tasks[i].completionTime - tasks[i].arrivalTime;
        tasks[i].waitingTime = tasks[i].turnAroundTime - tasks[i].burstTime; 
        
        if(sum < tasks[i + 1].arrivalTime) {
            int t = tasks[i + 1].arrivalTime - sum;
            sum = sum + t;
        }
    }
}

void display(vector<Process> arr) {
    sort(arr.begin(), arr.end(), comparator2);
    int totalWT = 0, totalTAT = 0;
    cout << "PNo.\tAT\tBT\tCT\tWT\tTAT\n";
    for (auto i : arr) {
        cout << i.processNo << "\t" << i.arrivalTime << "\t" << i.burstTime << "\t" << i.completionTime << "\t" << i.waitingTime << "\t" << i.turnAroundTime << endl;
        totalWT += i.waitingTime;
        totalTAT += i.turnAroundTime;
    }
    cout << "Average waiting time: " << (totalWT / arr.size()) << endl;
    cout << "Averge turnaround time: " << (totalTAT / arr.size()) << endl;
}

int main() {
    vector<Process> tasks;

    inputData(tasks);
    calculateTime(tasks);
    display(tasks);

    return 0;
}