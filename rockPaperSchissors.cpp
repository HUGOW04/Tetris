#include <iostream> 


int main()
{
	std::string player1;
	std::string player2;
	int round;
	int player1Score = 0;
	int player2Score = 0;
	std::cout << "Enter how many rounds: ";
	std::cin >> round;
	
	for (int i = 1; i <= round; i++)
	{
		while (true)
		{
			system("cls");
			std::cout << "write r,p,s"<<std::endl;
			std::cout << " Player1 asnwer: ";
			try
			{
				std::cin >> player1;
				if (player1 == "r" || player1 == "p" || player1 == "s")
				{
					break;
				}
			}
			catch(std::exception e)
			{
				
			}

		}
		while (true)
		{
			system("cls");
			std::cout << "write r,p,s"<<std::endl;
			std::cout << " Player2 asnwer: ";
			try
			{
				std::cin >> player2;
				if (player2 == "r" || player2 == "p" || player2 == "s")
				{
					break;
				}
			}
			catch (std::exception e)
			{

			}

		}



		
		if (player1 == player2)
		{
			std::cout << "Tie!";
		}
		else if (player1 == "r" && player2 == "p")
		{
			player2Score++;
		}
		else if (player1 == "p" && player2 == "r")
		{
			player1Score++;
		}
		else if (player1 == "s" && player2 == "p")
		{
			player1Score++;
		}
		else if (player1 == "p" && player2 == "s")
		{
			player2Score++;
		}
		else if (player1 == "r" && player2 == "s")
		{
			player1Score++;
		}
		else if (player1 == "s" && player2 == "r")
		{
			player2Score++;
		}
	}
	system("cls");
	if (player1Score > player2Score)
	{
		std::cout << "player1 won with "<< player1Score - player2Score;
		std::cout << "\nplayer1 score " << player1Score << " " << "player2 score " << player2Score;
	}
	else if (player1Score < player2Score)
	{
		std::cout << "player2 won with "<< player2Score - player1Score;
		std::cout << "\nplayer1 score " << player1Score << " " << "player2 score " << player2Score;
	}
	else
	{
		std::cout << "tie";
		std::cout << "\nplayer1 score " << player1Score << " " << "player2 score " << player2Score;
	}
}
