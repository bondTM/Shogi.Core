// Shogi.Test.cpp : アプリケーションのエントリ ポイントを定義します。
//
#include "stdafx.h"
#include <pieceControl.h>

int main()
{
	char a = 0;


	square testSq[9][9];
	init(testSq);

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {

			switch (testSq[i][j].piece)
			{
			case 0:
				printf("　");
				break;
			case 1:
				printf("王");
				break;
			case 2:
				printf("金");
				break;
			case 3:
				printf("銀");
				break;
			case 4:
				printf("桂");
				break;
			case 5:
				printf("香");
				break;
			case 6:
				printf("角");
				break;
			case 7:
				printf("飛");
				break;
			case 8:
				printf("歩");
				break;
			default:
				break;
			}
		}
		printf("\n");
	}

	//printf()
	//testSq

    return 0;
}

