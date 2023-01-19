#include <stdio.h>
#include <limits.h>

int min(int a, int b)
{
    if (a < b)
        return b;
    else if (b < a)
        return a;
}

void display(int arr[][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void taskScheduling(int arr[][3], int row, int col)
{
    int finTask = 0;
    while (finTask <= col)
    {
        int smallest = INT_MAX;
        int flag = 0;
        for (int i = 0; i < col; i++)
        {
            if (min(arr[i][0], arr[i][1]) < smallest)
            {
                smallest = min(arr[i][0], arr[i][1]);
                flag = i;
            }
        }
        arr[flag][0] = arr[flag][1] = INT_MAX;
        finTask++;
    }
    display(arr);
}

int main()
{
    int row = 2, col = 3;
    int arr[2][3] = {{140, 20, 80}, {100, 100, 70}};
    display(arr);

    taskScheduling(arr, row, col);

    return 0;
}