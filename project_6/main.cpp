#include <iostream>


const int MODE = 1;


int add(int a, int b) {
    return a + b;
}

void task_one()
{
	    #ifndef MODE
        std::cout << "Необходимо определить MODE" << std::endl;
    #else
        // Проверка значения MODE
        if (MODE == 0) {
            std::cout << "Работаю в режиме тренировки" << std::endl;
        } else if (MODE == 1) {
            std::cout << "Работаю в боевом режиме" << std::endl;
            
            // Попросить пользователя ввести два числа
            int a, b;
            std::cout << "Введите первое число: ";
            std::cin >> a;
            std::cout << "Введите второе число: ";
            std::cin >> b;
            
            // Вывести результат сложения
            int result = add(a, b);
            std::cout << "Результат сложения: " << result << std::endl;
        } else {
            std::cout << "Неизвестный режим. Завершение работы" << std::endl;
        }
    #endif
	
}




#define SUB(x, y) ((x) - (y))

void task_two() {
    int a = 6;
    int b = 5;
    int c = 2;
    
    std::cout << SUB(a, b) << std::endl;          
    std::cout << SUB(a, b) * c << std::endl;     
    std::cout << SUB(a, b + c) * c << std::endl; 
    
}

int main() {

	task_one();
	task_two();

}