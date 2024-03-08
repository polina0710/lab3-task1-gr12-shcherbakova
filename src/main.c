#include <stdio.h>

// Функция, проверяющая, является ли число 'счастливым'
int isLucky(int number) {
    int firstHalf = 0, secondHalf = 0;

    // Суммируем первые три цифры
    firstHalf += number / 100000;
    firstHalf += (number / 10000) % 10;
    firstHalf += (number / 1000) % 10;

    // Суммируем последние три цифры
    secondHalf += (number / 100) % 10;
    secondHalf += (number / 10) % 10;
    secondHalf += number % 10;

    // Сравниваем суммы
    return firstHalf == secondHalf;
}

int main() {
    int count = 0;

    // Перебираем все шестизначные числа
    for (int i = 100000; i <= 999999; i++) {
        if (isLucky(i)) {
            // Найдено 'счастливое' число
            count++;
        }
    }

    printf("Количество 'счастливых' чисел: %d\n", count);

    return 0;
}
