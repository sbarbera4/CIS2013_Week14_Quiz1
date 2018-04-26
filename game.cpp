#include <iostream>
#include <cstring>

using namespace std;

class Game
{
private:
	string name;
	int score;

public:
	Game()
	{

	}
	void set_name();

	void set_score();

	int get_name();

	int get_score();


};

class Mine_Sweeper : public Game
{
private:
	int board_Size;
	int board_Rows;
	int board_Columns;
	int selected_Squares;
	int bomb_Squares;

public:
	Mine_Sweeper(int x, int y)
	{
		set_name();
		y = bomb_Squares;
		x = board_Size;
	}

	void print_board();
	{
		while (i = 0, i < board_Rows, i++)
		{

		}
	}

	int get_square();

};

int main()
{

}