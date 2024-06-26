// 1. Start
// 2. Input the processes, their burst time  and arrival time
// 3. Set currentTime=arrivalTime of smallest process
// 3. Sort the processes according to burst time
// 4. Take the unvisited process with minimum burst time and check if it has arrived in ready queue
// 5. If it has arrived, find waiting time ,turnaround time,completion time and set it as visited. else move to next process
//                a)waitingTime = currentTime � arrivalTime;
//                b)turnAroundTime = waitingTime+ burstTime;
//                c)completionTime= currentTime + burst[i];
//  7.If no process is  there in queue, increment current time
//  8. Continue traversing till each process is scheduled
//  9. Find average waiting time = total_waiting_time / no_of_processes
// 10. Find average turnaround time = total_turnaround_time / no_of_processes
// 11. End

#include <stdio.h>
int n, i, j, yes, temp, completionTime[10], proc[10], loop, smallest, current_time, sorted[10], arrival[10] = {0}, visited[10] = {0}, tat[10], order[10], wt[10], burst[10] = {0}, visited[10];
float total_tat = 0, total_wt = 0;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void Sort(int arr[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
        for (j = i + 1; j <= n; j++)
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
                swap(&proc[i], &proc[j]);
                swap(&arrival[i], &arrival[j]);
            }
}
int main()
{
    printf("\n-------------------------------");
    printf(" \nNAME      :   SRUTHI O T \n");
    printf("\nPROGRAM  : SHORTEST JOB FIRST \n\n");
    printf("---------------------------------\n");
    printf("Enter no of process : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\nArrival time of process %d is :", i);
        scanf("%d", &arrival[i]);
        printf("\nBurst time of process %d is :", i);
        scanf("%d", &burst[i]);
        proc[i] = i;
        visited[i] = 0;
    }
    smallest = arrival[1];
    j = smallest;
    for (loop = 1; loop <= n; loop++)
    {
        if (smallest > arrival[loop])
        {
            smallest = arrival[loop];
            j = loop;
        }
    }
    current_time = smallest;
    j = 1;
    Sort(burst, n);
    while (j <= n)
    {
        yes = 0;
        for (int i = 1; i <= n; i++)
        {
            if (visited[i] == 0 && current_time >= arrival[i])
            {
                yes = 1;
                order[j] = proc[i];
                visited[i] = 1;
                wt[i] = current_time - arrival[i];
                tat[i] = wt[i] + burst[i];
                completionTime[i] = current_time + burst[i];
                total_wt += wt[i];
                total_tat += tat[i];
                current_time = completionTime[i];
                ++j;
                break;
            }
        }
        if (yes == 0)
        {
            ++current_time;
        }
    }
    total_wt = total_wt / n;
    total_tat = total_tat / n;
   // printf("\norder in which process get executed :\t");
    printf("Gantt Chart :\n");

printf("\t+");

for(i=1;i<=n;i++)
printf("-------+");
printf("\n");
printf("\t|");
for(i=1;i<=n;i++)
printf("   %d   |",order[i]);
printf("\n");
printf("\t+");
  /*  for (i = 1; i <= n; i++)
    {
        printf("....%d...\t", order[i]);
    }*/
    printf("\n\n             arrival_time       Burst_time    Turn_around_time    waiting_time     completion time");
    for (i = 1; i <= n; i++)
    {
        printf("\nprocess%d            %d             %d                  %d                 %d               %d", proc[i], arrival[i], burst[i], tat[i], wt[i], completionTime[i]);
    }
    printf("\n\n Average waiting time is %.2f", total_wt);
    printf("\n Average turn around time is %.2f", total_tat);
}
