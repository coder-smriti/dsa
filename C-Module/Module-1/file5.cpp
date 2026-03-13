#include <stdio.h>
#include <string.h>

struct Song {
    char title[100];
    int length;
};

int main() {
    int n;
    
    printf("Enter number of songs: ");
    scanf("%d", &n);

    struct Song s[n], temp;

    // Input songs
    for(int i = 0; i < n; i++) {
        printf("Enter title of song %d: ", i + 1);
        scanf("%s", s[i].title);

        printf("Enter length of song %d: ", i + 1);
        scanf("%d", &s[i].length);
    }

    // Sorting songs by length (ascending)
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(s[i].length > s[j].length) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    // Output sorted songs
    printf("\nSorted Songs:\n");
    for(int i = 0; i < n; i++) {
        printf("%s %d\n", s[i].title, s[i].length);
    }

    return 0;
}