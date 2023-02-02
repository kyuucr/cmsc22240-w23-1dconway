#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int N = 1e6;
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
    int arr[N];
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % M;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            sum += arr[j];
        }
    }
    printf("sum: %f\n", sum);

    return 0;
}

