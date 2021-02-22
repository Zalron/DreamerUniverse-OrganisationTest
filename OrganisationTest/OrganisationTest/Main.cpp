#include "flecs.h"
#include "Unit.h"

int main(int argc, char* argv[]) 
{
    flecs::world world;

    world.entity("SpawnUnit").set<SpawnUnit>({9, true});

    world.system<SpawnUnit>("CreateUnitEntity").iter(&Unit::CreateUnit);

    while (world.progress()) {}
}
