#include <stdio.h>
#include <limits.h>

struct Tasks {
    int time;
    int task;
    int vm;
};

int taskSchedule(struct Tasks arr[], int size) {
    int finTask = 0;
    while (finTask < size) {
        int smallest = INT_MAX;
        int temp = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i].time < smallest) {
                smallest = arr[i].time;
                temp = arr[i].task;
            }
        }

        for (int i = 0; i < size; i++) {
            if (arr[i].task != temp && ) {

            }
        }

        finTask++;
    }
}

int main() {
    int size = 3;
    struct Tasks arr[size];

    arr[0].time = 100;
    arr[0].task = 1;
    arr[0].vm = 2;

    arr[1].time = 20;
    arr[1].task = 2;
    arr[1].vm = 1;

    arr[2].time = 60;
    arr[2].task = 3;
    arr[2].vm = 1;

    return 0;
}


/*

140  20   60
100  100  70

*/