#include "game.h"

void Game::Player::Ship::move_to_player(Player player)
{};

void Game::Player::Ship::move_to_island()
{};

void Game::Player::Ship::move_to_sea()
{};

void Game::Player::take_a_loan()
{
	++loan;
	money += 10;
};

void Game::Player::repay_a_loan()
{
	--loan;
	money -= 10;
};

void Game::Player::repay_a_percent()
{
	--money;
};

void Game::Player::buy_a_warehouse()
{};

void Game::Player::buy_a_machine(std::string colour)
{};

void Game::Player::produce()
{};

void Game::Player::buy_containers(Player player)
{};

void Game::Player::change_price()
{};

void Game::create_game(int num_of_players)
{
	//std::array<Player, num_of_players> Players;
};

void Game::take_a_turn()
{};

void Game::define_a_winner()
{};