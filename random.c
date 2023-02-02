#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int N = 1e7;
    int M = 100;
    int isVerbose = 0;
    int opt;
    while((opt = getopt(argc, argv, "n:m:v")) != -1)
    {
        switch(opt)
        {
            case 'n':
                N = atoi(optarg);
                break;
            case 'm':
                M = atoi(optarg);
                break;
            case 'v':
                isVerbose = 1;
        }
    }
    if (isVerbose)
    {
        printf("N: %d, M: %d\n", N, M);
    }

    // Inits
    srand(1);
    int* arr = (int*) calloc(N, sizeof(int));
    long long sum = 0;
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % M;
    }

    int prime = 887;
    int i = 0;
    int flagRun = 1;
    while(flagRun)
    {
        long long temp = i * 1e8 / prime;
        if (temp < N)
        {
            if (isVerbose)
            {
                printf("temp: %lld\n", temp);
            }
            sum += arr[(int)temp];
            i++;
        }
        else
        {
            flagRun = 0;
        }
    }
    printf("sum: %lld\n", sum);

    return 0;
}
