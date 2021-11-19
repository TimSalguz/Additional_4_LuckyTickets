//Задача №4
//«Счастливые билетики»
//
//Ограничение по времени 2 сек.
//Ограничение по памяти 256 мб.
//
//	Посчитайте количество всех возможных счастливых трамвайных билетиков. Номер билета содержит 6 цифр.
#include <iostream>

int main() {
    int count = 0;
    for(int i = 0; i<=999999; i++)
    {
        int sumOfLast3 = 0;
        int sumOfFirst3 = 0;
        for (int j = 0; j < 3; ++j)
            sumOfFirst3 = i/1%10+i/10%10+i/100%10;
        for (int k = 3; k < 6; ++k)
            sumOfLast3 = i/1000%10+i/10000%10+i/100000%10;
        if (sumOfFirst3 == sumOfLast3)
            count++;
    }
    std::cout << count << std::endl;
    return 0;
}
