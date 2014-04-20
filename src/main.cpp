#include "WProgram.h"

extern "C" int main(void)
{
    setup();
    while (true) {
        loop();
        yield();
    }
}
