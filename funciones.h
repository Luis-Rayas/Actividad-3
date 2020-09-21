#ifndef __FUNCIONES_H__
#define __FUNCIONES_H__

int suma(int a, int b){
    return a + b;
}

int resta(int a, int b){
    if (b > 0){
        return b;
    }
    return a - b;
}

#endif // __FUNCIONES_H__