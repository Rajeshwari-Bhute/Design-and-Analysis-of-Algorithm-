#include <stdio.h>
#include <stdlib.h>

int n, target;
int arr[100];

int subsets[1000][100];
int sizes[1000];
int count = 0;

void findSubsets(int index, int sum, int subset[], int size)
{
    if (index == n)
    {
        if (sum == target)
        {
            for (int i = 0; i < size; i++)
                subsets[count][i] = subset[i];

            sizes[count] = size;
            count++;
        }
        return;
    }

    /* Include current element */
    subset[size] = arr[index];
    findSubsets(index + 1, sum + arr[index], subset, size + 1);

    /* Exclude current element */
    findSubsets(index + 1, sum, subset, size);
}

int main()
{
    int subset[100];
 scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &target);

    findSubsets(0, 0, subset, 0);

    if (count == 0)
    {
        printf("-1\n");
    }
    else
    {
        /* Print in reverse order of discovery */
        for (int i = count - 1; i >= 0; i--)
        {
            for (int j = 0; j < sizes[i]; j++)
            {
                if (j > 0)
                    printf(" ");

                printf("%d", subsets[i][j]);
            }
            printf(" \n");
        }
    }

    return 0;
}
