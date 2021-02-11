#include "flecs.h"

int main(int argc, char* argv[]) 
{
    flecs::world ecs;

    while (ecs.progress()) {}
}
