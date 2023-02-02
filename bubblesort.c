#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int N = 1e6;
    int M = 10000;
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
    int tmp;
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % M;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

