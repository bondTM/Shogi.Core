#pragma once

typedef struct {
	char piece;		//��̎��
	char owner;		//��̏��L��
	char isChosen;	//��I������Ă��邩
} square;

void init(square initSq[9][9]);