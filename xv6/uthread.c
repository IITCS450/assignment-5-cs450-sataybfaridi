#include "types.h"
#include "stat.h"
#include "user.h"
#include "uthread.h"

// TODO: Implement cooperative user-level threads.

struct thread {
    int tid;
    int state;    //0 = free, 1 = running
};


struct thread ttable[8];
struct thread* currentThread;

void thread_init(void){
    for (int i=0;i<7;i++){
        ttable[0].state = 0;
    }

    ttable[0].state = 1;
    currentThread = &ttable[0];
    double* stack;
}
tid_t thread_create(void (*fn)(void*), void *arg){ 
    (void)fn; 
    (void)arg;
    
    for (int i = 0; i<8; i++){
        if (ttable[i].state == 0){
            ttable[i].state = 1;
            break;
        }
    }
    
    return -1; 
}
void thread_yield(void){}
int thread_join(tid_t tid){ (void)tid; return -1; }
