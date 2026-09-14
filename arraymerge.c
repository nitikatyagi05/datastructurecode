#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    
    // Calculate sizes
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = n1 + n2;
    
    // Resultant array
    int merged[n3];
    
    // Copy first array
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    
    // Append second array
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }
    
    // Print result
    printf("Merged Array: ");
    for (int i = 0; i < n3; i++) {
        printf("%d ", merged[i]);
    }
    
    return 0;
}
