#include <stdio.h>

int min_steps(int x, int y) {
    int distance = y - x;
    int steps = 0;
    int step_length = 1;

    while (distance > 0) {
        distance -= step_length;
        steps++;
        if (distance <= 0) {
            break;
        }
        step_length++;
        distance -= step_length;
        steps++;
        if (distance <= 0) {
            break;
        }
    }

    return steps;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x = 45;
    int y = 51;
    printf("Мінімальна кількість кроків від %d до %d: %d\n", x, y, min_steps(x, y));
    return 0;
}
