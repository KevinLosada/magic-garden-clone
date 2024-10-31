//
// Created by Kevin Losada on 10/30/2024.
//

#include "Board.h"
#include <iostream>

char boardArray[3][3];

Board::Board() = default;

Board::~Board() = default;

void Board::CheckWin() {
}

void Board::PrintBoard() {
    std::cout << boardArray[0][0];
}

void Board::GetInput() {
}

void Board::UpdateBoard() {
}
