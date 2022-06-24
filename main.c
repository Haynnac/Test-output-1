#include <stdio.h>
struct WeirdList{
    int head;
    int a[10];
};
struct WeirdList w;
 
void _add(int n){
    w.a[w.head] = n;
    w.head++;
}
 
void _remove(){
    w.head--;
}
 
void p(){
    for(int i=0; i<=10; i++){
        printf("%d, ", w.a[i]);
    }
}
int main(void) {
    w.head = 0;
    _add(4);
    _add(4);
    _remove();
    _remove();
    _add(1);
    p();
    return 0;
}