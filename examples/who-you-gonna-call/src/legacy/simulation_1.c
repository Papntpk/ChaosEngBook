
#include <unistd.h>
#include "unicorn_1.h"

ssize_t simulation_1(int fd) {
    char a = 108, simulation_1_b = 109, simulation_1_simulation_1 = 98;
    for (int i = 0; i < 3; i++){
        a++; simulation_1_b++;
    }
    // not sure why, this didn't work with ++
    // TODO check why it wasn't working 
    simulation_1_simulation_1 -= 3 * -1;
    char size = '3';
    write(fd, &size, sizeof(size));
    char newline[] = "\r\n";
    write(fd, newline, sizeof(newline)-1);
    write(fd, &a, sizeof(a));
    write(fd, &simulation_1_b, sizeof(a)); // maybe should be simulation_1_b? It wouldn't compile
    write(fd, &simulation_1_simulation_1, sizeof(simulation_1_simulation_1));
    write(fd, newline, sizeof(newline)-1);
    // TODO prevent stack overflow
    unicorn_1(fd);
    return 0; // TODO return something more meaningful
}