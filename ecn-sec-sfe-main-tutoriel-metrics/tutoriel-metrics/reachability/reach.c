/******************************
Fonctions locales
******************************/
void baz (int j) {
    return;
}

void foo (int k) {
    int i = 0;
    return ;
}

/******************************
Varibales globales
******************************/
void (*bar) (int); // bar est un pointeur de fonction pour le prototype void ... (int)
void (*t[2])(int)= {baz, 0}; // t est un tableau de poiteurs de fonction initialiser avec baz et NULL

int main() {
    int j = 0;
    void (*(*pt)[2])(int) = &t;
    if (!j) {
        return 1;
    }
    else {
        bar = foo;
        bar (1);
        return 0;
    }
}