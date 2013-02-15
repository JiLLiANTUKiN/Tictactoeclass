#ifndef BOARD_H
#define BOARD_H


class Board
{
    public:
        Board();
        virtual ~Board();

        void initialize();
        void render();
        void update(int move , char icon);

    protected:
    private:
        char box[9];
};

#endif // BOARD_H
