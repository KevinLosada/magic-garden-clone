//
// Created by Kevin Losada on 10/30/2024.
//

#ifndef BOARD_H
#define BOARD_H



class Board {
public:
    Board();
    ~Board();

    void CheckWin();
    void PrintBoard();
    void GetInput();

private:
    void UpdateBoard();

};



#endif //BOARD_H
