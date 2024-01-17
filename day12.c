#include <stdio.h>

/* Create aliases for structures using typedef */
typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point topLeft;
    Point bottomRight;
} Rectangle;

int main()
{
    Rectangle rect;

    /* Get coordinates for the top-left corner */
    printf("Enter coordinates for top-left corner:\n");
    printf("X: ");
    scanf("%d", &rect.topLeft.x);
    printf("Y: ");
    scanf("%d", &rect.topLeft.y);

    /* Get coordinates for the bottom-right corner */
    printf("Enter coordinates for bottom-right corner:\n");
    printf("X: ");
    scanf("%d", &rect.bottomRight.x);
    printf("Y: ");
    scanf("%d", &rect.bottomRight.y);

    /* Print the rectangle details */
    printf("\nRectangle details:\n");
    printf("Top-left corner: (%d, %d)\n", rect.topLeft.x, rect.topLeft.y);
    printf("Bottom-right corner: (%d, %d)\n", rect.bottomRight.x, rect.bottomRight.y);

    return 0;
}

