//Q61:Search for an element in an array using linear search.
#include <stdio.h>
int main() {
    int n, i, key, f=0;

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
     {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) 
    {
        if (a[i] == key) 
        {
            printf("Element %d found at position %d\n", key, i + 1);
            f=1;
            break;
        }
    }

    if (!f)
     {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}