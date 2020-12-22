#include <stdio.h>
#include <stdlib.h>
#include "stockmarket.c"
#include "appconst.h"
#include "stockmarket.h"

void test()
{
    Queue q = queue_new(5);
    Queue *q1;
    tradingQ share;
    QueueRes p;
    q = queue_add(q1,share,p);
    q = queue_add(q1,share,p);
    q = queue_add(q1,share,p);
    q = queue_add(q1,share,p);
    q = add_new_share(q1,share,p);
    q = look_up(q1,share);
    q = top_up(q1,share,40);
}



int main()
{
    printf("\n");
    return 0;
}
