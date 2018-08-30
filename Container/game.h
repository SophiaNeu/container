#pragma once
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <array>

struct Game
{
	int num_of_players;	// min:3, max:5
	std::array<int, 5> warehouse_prices = { 0, 4, 5, 6, 7 };
	std::array<int, 4> machine_prices = { 0, 6, 9, 12 };
	std::array<std::string, 5> container_colours = { "black", "brown", "purple", "yellow", "grey" };

	struct Container
	{ std::string colour; };

	struct Machine
	{ std::string colour; };

	struct Reserve
	{
		std::unordered_map<Container, int> containers;
		std::unordered_map<Machine, int> machines;
		int num_of_warehouses;
	};
	
	struct Player
	{
		std::string name;
		int money = 20;
		int loan = 0;
		std::array<std::string, 5> card;
		int num_of_warehouses = 1;
		std::unordered_set<Machine> machines;
		std::unordered_multimap<int, Container> factory_store;
		std::unordered_multimap<int, Container> harbour_store;
		std::unordered_multiset<Container> island;

		struct Ship
		{
			std::string location;
			std::unordered_multiset<Container> containers;
			void move_to_player(Player player);
			void move_to_island();
			void move_to_sea();
		};

		void take_a_loan();
		void repay_a_loan();
		void repay_a_percent();
		void buy_a_warehouse();
		void buy_a_machine(std::string colour);
		void produce();
		void buy_containers(Player player);	// buy from factory_store
		void change_price();	// harbour_store 
	};

	void create_game(int num_of_players);
	void take_a_turn();
	void define_a_winner();
};

