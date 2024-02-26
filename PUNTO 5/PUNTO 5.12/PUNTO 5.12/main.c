#include <stdio.h>
#include <stdbool.h>

bool esPalindromo(int arr[], int n) {
    for(int i = 0; i < n / 2; i++) {
        if(arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    if(esPalindromo(arr, n)) {
        printf("El array es palindr�mico.\n");
    } else {
        printf("El array no es palindr�mico.\n");
    }

    return 0;
}
