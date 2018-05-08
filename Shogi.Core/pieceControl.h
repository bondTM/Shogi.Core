#pragma once

typedef struct {
	char piece;		//‹î‚Ìí—Ş
	char owner;		//‹î‚ÌŠ—LÒ
	char isChosen;	//‹î‚ª‘I‘ğ‚³‚ê‚Ä‚¢‚é‚©
} square;

void init(square initSq[9][9]);