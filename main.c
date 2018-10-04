#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define MIN 55

// prototypes:
int addThree(int);
void showMessage();
void checkRange(int);

int main()
{ // start main()
    /*
    int num = 1;
    num = addThree(num);
    printf("%d\n", num);
    showMessage();
    */

    checkRange(101);

    return 0;
} // end main()

int addThree(int x)
{
    return x + 3;
}

void showMessage()
{
    printf("Value is out of range!\n");
}

void checkRange(int enteredValue)
{
    if (enteredValue > MAX || enteredValue < MIN)
    {
        showMessage();
    }
}
