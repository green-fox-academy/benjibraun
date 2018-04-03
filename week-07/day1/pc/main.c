#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer pc = {3.4,16,8};
    Notebook laptop = {3.2,8,8};

    printf("pc cpu = %.1fGHz\npc ram = %dGB\npc bits = %d\n" ,pc.cpu_speed_GHz,pc.ram_size_GB,pc.bits);
    printf("Notebook cpu = %.1fGHz\nNotebook ram = %dGB\nNotebook bits = %d\n" ,laptop.cpu_speed_GHz,laptop.ram_size_GB,laptop.bits);
    return 0;
}
