#include <stdio.h>

// Enumeration of color names
typedef enum {
    RED,
    GREEN, 
    BLUE
} Color;

// Function to get hexadecimal color code based on enum
const char* getColorHex(Color color) {
    switch(color) {
        case RED:     return "#FF0000";    // Bright Red
        case GREEN:   return "#00FF00";    // Bright Green
        case BLUE:    return "#0000FF";    // Bright Blue
        default:      return "#000000";    // Black (default)
    }
}

// Function to print color name and its hex code
void printColorInfo(Color color) {
    const char* colorNames[] = {
        "Red", "Green", "Blue"
    };

    printf("Color: %s\n", colorNames[color]);
    printf("Hex Code: %s\n", getColorHex(color));
}

int main() {
    // Demonstrate using the enum with switch statement
    Color selectedColor = BLUE;

    // Switch statement to handle color selection
    switch(selectedColor) {
        case RED:
            printf("Selected a hot color!\n");
            printColorInfo(RED);
            break;
        
        case GREEN:
            printf("Selected a nature color!\n");
            printColorInfo(GREEN);
            break;
        
        case BLUE:
            printf("Selected a cool color!\n");
            printColorInfo(BLUE);
            break;
        
        default:
            printf("Unknown color selected.\n");
    }

    // Additional examples
    printf("\nAll Color Hex Codes:\n");
    for (int i = 0; i < 10; i++) {
        printColorInfo((Color)i);
        printf("\n");
    }

    return 0;
}