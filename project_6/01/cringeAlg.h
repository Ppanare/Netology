#pragma once

int sum(int a, int b){
    return a + b;
}

int minus(int a, int b){
    return a - b;
}

int umn(int a, int b){
    return a * b;
}

int del(int a, int b){
    return a / b;
}

int stepen(int a, int b){
    for(int i = 1; i < b; ++i){
        a *= a;
    }
    return a;
}
