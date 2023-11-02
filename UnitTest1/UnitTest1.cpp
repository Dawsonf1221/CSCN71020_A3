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

			int GameResults(char* player1, char* player2);

			// result = 1 : player 1 wins
			// result = 2 : player 2 wins
			// result = 3 : draw
			// result = 4 : invalid input

			int result = GameResults(player1, player2);

			Assert::AreEqual(1, result);

		}

		
		
	};
}
