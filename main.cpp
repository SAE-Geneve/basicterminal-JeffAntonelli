#include <iostream>
#include "tile.h"
#include "command.h"

void show_help() 
{
	std::cout << "Valid options:\n";
	std::cout << "\t[q]uit  -> quit the game.\n";
	std::cout << "\t[n]orth -> move north.\n";
	std::cout << "\t[s]outh -> move south.\n"; // fill up the rest!
	std::cout << "\t[e]ast -> move east.\n";// See the list of command in the tile.h.
	std::cout << "\t[w]est -> move west.\n";
	std::cout << "\t[a]attack -> attack enemy.\n";
}

void show_state() 
{
	Player player = get_player();
	std::cout << "Maze :\n";
	std::cout <<(char)get_tile_at_position(player.x -1, player.y -1);// complete me!
	std::cout <<(char)get_tile_at_position(player.x , player.y - 1);
	std::cout << (char)get_tile_at_position(player.x +1, player.y - 1);
	std::cout <<"\n";
	std::cout <<(char)get_tile_at_position(player.x -1, player.y);
	std::cout << "p";
	std::cout <<(char)get_tile_at_position(player.x +1, player.y);
	std::cout << "\n";
	std::cout << (char)get_tile_at_position(player.x -1, player.y + 1);
	std::cout << (char)get_tile_at_position(player.x , player.y +1);
	std::cout << (char)get_tile_at_position(player.x +1, player.y +1);
	std::cout << "\n";
	// You can either show the whole maze or just a portion of it.(vous pouvez afficher le labyrinth en entier ou juste une partie)
	std::cout << "Player(" << player.x << ", " << player.y << ") :\n";
	// TODO complete me!
	std:: // Now check if there is an enemy within range.(maintenant verifier si il y a un ennemi à portée)
	// for each enemy within range: (pour chaque ennemi à portée)
	// show enemy description. (afficher la description de l ennemi)
}

CommandType get_command() 
{
	std::cout << "] ";
	std::string command_str;
	std::getline(std::cin, command_str);
	switch (command_str[0])
	{
		case 'q':
			return CommandType::QUIT;
		case 'n':
			return CommandType::NORTH;
		case 's':
			return CommandType::SOUTH;
		case 'e':
			return CommandType::EAST;
		case 'w':
			return CommandType::WEST;
		case 'a':
			return CommandType::ATTACK;
		case 'h':
		default:
			show_help();
			return CommandType::HELP;
	}
}

int main()
{
	std::cout << "Welcome in the Maze!\n";
	show_help();
	while (true)
	{
		show_state();
		CommandType command_type = get_command();
		switch (command_type) 
		{
			case CommandType::QUIT:
				std::cout << "bye!\n";
				return 0;
			case CommandType::NORTH:
				north();
				tick();
				break;
			case CommandType::SOUTH:
				south();
				tick();
				break;
			case CommandType::EAST:
				east();
				tick();
				break;
			case CommandType::WEST:
				west();
				tick();
				break;
			case CommandType::ATTACK:
				attack();
				tick();
				break;
			case CommandType::HELP:
			default:
				tick();
				break;
		}
	}
	return 0;
}
