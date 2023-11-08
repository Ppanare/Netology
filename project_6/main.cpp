#include <iostream>


#define  MODE  1
#define MODECHECK(MODE) if (MODE == 0) {std::cout<< "Training mode" << std::endl;} \
else if (MODE == 1) {std::cout<< "Battle mode" <<std::endl;} \
else {std::cout<<"



int add(int a, int b) {
    return a + b;
}


void task_one()
{
	    #ifndef MODE
        std::cout << "Define MODE" << std::endl;
    #else
            MODECHECK(MODE);
            int a, b;
            std::cout << "Input first integer: ";
            std::cin >> a;
            std::cout << "Input second integer: ";
            std::cin >> b;
            
            int result = add(a, b);
            std::cout << "Result: " << result << std::endl;
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