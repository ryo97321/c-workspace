#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int boxWidth;
    int nBlock;

    // Get boxWidth and nBlock
    scanf("%d", &boxWidth);
    scanf("%d", &nBlock);

    int blockWidths[nBlock];
    int nBlockWidth = sizeof blockWidths / sizeof blockWidths[0];

    char buffer[256];
    rewind(stdin);      // clear stdin
    fgets(buffer, 256, stdin);

    char *p_buffer;
    p_buffer = strtok(buffer, " ");

    // Set blockWidths element
    int blockWidthsIndex = 0;
    while(p_buffer != NULL) {
        int blockWidth = atoi(p_buffer);
        blockWidths[blockWidthsIndex++] = blockWidth;
        p_buffer = strtok(NULL, " ");
    }

    // bubble-sort blockWidths (asc)
    int temp;
    int isChange = 1;      // if changed then isChange -> 1
    while(isChange == 1) {
        isChange = 0;
        for(int i=0; i<nBlockWidth-1; i++) {
            for(int j=i+1; j<nBlockWidth; j++) {
                if(blockWidths[i] > blockWidths[j]) {
                    temp = blockWidths[i];
                    blockWidths[i] = blockWidths[j];
                    blockWidths[j] = temp;
                    isChange = 1;
                }
            }
        }
    }

    // printf("\n");
    // for(int i=0; i<10; i++) {
    //     printf("%d\n", blockWidths[i]);
    // }
    // printf("%d\n", nBlockWidth);

    // put block in box
    int nBlockCanIntoBox = 0;
    int sumWidth = 0;
    for(int i=0; i<nBlockWidth; i++) {
        sumWidth += blockWidths[i];
        if(sumWidth > boxWidth) {
            break;
        } else {
            nBlockCanIntoBox++;
        }
    }

    printf("%d\n", nBlockCanIntoBox);
    return 0;
}