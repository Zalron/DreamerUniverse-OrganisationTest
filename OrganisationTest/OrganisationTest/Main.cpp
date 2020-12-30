#include "flecs.h"

int main(int argc, char* argv[]) 
{
    flecs::world ecs;

   /* ecs.entity("MyEntity")
        .set<Position>({ 0, 0 })
        .set<Velocity>({ 1, 1 });*/

    while (ecs.progress()) {}
}
