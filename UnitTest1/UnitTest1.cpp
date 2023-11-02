#include "pch.h"
#include "CppUnitTest.h"
#include <string.h>




#define MAXSIZE 40

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Player1Wins)
		{
			char player1[MAXSIZE] = "Rock";
			
			char player2[MAXSIZE] = "Scissors";


			char rock[MAXSIZE] = "Rock";
			char paper[MAXSIZE] = "Paper";
			char scissors[MAXSIZE] = "Scissors";

			int equal;

			int player1checkrock = 1;
			int player1checkpaper = 1;
			int player1checkscissors = 1;

			int player2checkrock = 1;
			int player2checkpaper = 1;
			int player2checkscissors = 1;

			int result;

			// if the two chars in strcmp are equal then it will return 0
			equal = strcmp(player1, player2);

			player1checkrock = strcmp(player1, rock);
			player1checkpaper = strcmp(player1, paper);
			player1checkscissors = strcmp(player1, scissors);

			player2checkrock = strcmp(player2, rock);
			player2checkpaper = strcmp(player2, paper);
			player2checkscissors = strcmp(player2, scissors);

			// if one of the players enteres an invalid input
			if (player1checkrock != 0 || player1checkpaper != 0 || player1checkscissors != 0)
				result = 4;

			if (player2checkrock != 0 || player2checkpaper != 0 || player2checkscissors != 0)
				result = 4;

			// if both players choose the same
			if (equal == 0)
				result = 3;

			// cases where player 1 wins
			if (player1checkrock == player2checkscissors)
				result = 1;

			if (player1checkpaper == player2checkrock)
				result = 1;

			if (player1checkscissors == player2checkpaper)
				result = 1;

			// cases where player 2 wins
			if (player2checkrock == player1checkscissors)
				result = 2;

			if (player2checkpaper == player1checkrock)
				result = 2;

			if (player2checkscissors == player1checkpaper)
				result = 2;

			Assert::AreEqual(1, result);

		}

		
		
	};
}
