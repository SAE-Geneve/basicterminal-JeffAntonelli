#include <map>
#include <cassert>
#include "tile.h"

// An anonymous namespace just here so you cannot access there from somewhere
// else.
namespace {

	// Map of the local space.
	std::string local_world = 
		"########################" // 24 * 8
		"#.....E......E.....#..P#" // P is at (22, 1)
		"#######..#####..####...#"
		"#........#.............#"
		"#.E......#...E...E.....#"
		"#..##################..#"
		"#.........E............#"
		"########################";

	// Local player stuff.
	Player local_player{};

	// Map that map space to enemies.
	std::map<std::pair<int, int>, Enemy> local_enemy;

	int xy_local(int x, int y)
	{
		// We want the local array to be bound to the borders.
		if (x < 0) x = 0;
		if (x > 23) x = 23;
		if (y < 0) y = 0;
		if (y > 7) y = 7;
		// Return the position within the local world of the cursor.
		// As the array is singular dimention we use the largest value to
		// split it.
		return x + y * 24;
	}

} // End of namespace.

TileType get_tile_at_position(int x, int y)
{
	return (TileType)local_world[xy_local(x, y)];//Get the tile at the location x, y in the world.(obtenez la tuile à lemplacement x, y dans le monde)
	
}

void set_enemy(Enemy enemy, int x, int y)
{
	// Set the location of the enemy.
	enemy.x = x;
	enemy.y = y;
	local_enemy[{x, y}] = enemy;
}

Enemy get_enemy(int x, int y)
{
	Enemy enemy = local_enemy[{x, y}];
	enemy.x = x;
	enemy.y = y;
	// TODO complete me!
	// Get the local position in the world (if it exist).(obtenez la position locale dans la map( si elle existe)
	// If an enemy is at the position. (si un ennemi et sur la position)
	// Then check if there is an enemy at this position? (verifiez ensuite si il y a un ennemi a cette position)
	// if not then create it and store it at the location.(sinon creez-le et stockez-le a l emplacement)
	// return the enemy at the position. (ramenez l ennemi a la position)
	return enemy;
}

void set_player(Player player)
{
	// Erase the local player.
	local_world[xy_local(local_player.x, local_player.y)] = '.';
	local_player = player;
	// Reinclude the new player.
	local_world[xy_local(player.x, player.y)] = 'P';
}

Player get_player()
{
	return local_player;
}
