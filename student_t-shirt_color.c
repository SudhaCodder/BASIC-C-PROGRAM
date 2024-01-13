#include <stdio.h>
// to issu t-shirt to the student on the baisc on following rule
//  boy-hostel='H'-green
//  boy-day scholar='D'-blue
//  girl-hostel='H'- yellow
//  girl-day scholar='D'-red


#include <string.h>

int main() {
    char gender, residence;
    char tShirtColor;

    printf("Enter the student's gender (b for boy, g for girl): ");
    scanf(" %c", &gender);

    printf("Enter the student's residence type (h for hostel, d for day scholar): ");
    scanf(" %c", &residence);

    if (gender == 'b') {
        if (residence == 'h') {
            tShirtColor = 'G'; // Green
        } else if (residence == 'd') {
            tShirtColor = 'B'; // Blue
        }
    } else if (gender == 'g') {
        if (residence == 'h') {
            tShirtColor = 'Y'; // Yellow
        } else if (residence == 'd') {
            tShirtColor = 'R'; // Red
        }
    } else {
        printf("Invalid input. Please enter 'b' or 'g' for gender and 'h' or 'd' for residence.\n");
        return 1;
    }

    printf("The student should be issued a t-shirt with color: %c\n", tShirtColor);

    return 0;
}

