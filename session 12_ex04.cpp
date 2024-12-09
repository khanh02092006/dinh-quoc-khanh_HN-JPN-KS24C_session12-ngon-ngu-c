#include <stdio.h>

// H�m t�m s? l?n nh?t trong m?ng
int timSoLonNhat(int arr[], int n) {
    if (n <= 0) {
        printf("M?ng r?ng ho?c kh�ng h?p l?.\n");
        return -1; 
    }

    int max = arr[0]; 

    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }

    return max; 
}

int main() {
    int n;

   
    printf("Nh?p s? lu?ng ph?n t? trong m?ng: ");
    scanf("%d", &n);

    int arr[n]; 

   
    printf("Nh?p c�c ph?n t? c?a m?ng:\n");
    for (int i = 0; i < n; i++) {
        printf("Ph?n t? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    int max = timSoLonNhat(arr, n);
    if (n > 0) {
        printf("S? l?n nh?t trong m?ng l�: %d\n", max);
    }

    return 0;
}
