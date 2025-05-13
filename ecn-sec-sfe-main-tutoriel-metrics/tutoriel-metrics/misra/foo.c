typedef char UI_8;
typedef unsigned long UI_32;

extern void error(void); 

UI_32 foo(UI_8 arr[4]) 
{
    UI_32 acc = 0, j; 
    UI_32 err = 0; 
    for (j = 0; j < 4; j++) {
        acc = (acc << 8) + arr[j]; 
    }
    if (acc == 0) {
        err = 1; 
    }
    if (err != 0) {
        error();
    }
    return acc; 
}