

#include"Board.h"



#include<vector>


Board::Board()
{
    m_boardSize=0;
    m_board=NULL;
}
Board::Board(const Board& other)
{

    if(other.m_board)
    {
        m_boardSize=other.m_boardSize;
        m_board=new BoardRow[m_boardSize];
        for(int i=0;i<m_boardSize;i++)
        {
            m_board[i]=other.m_board[i];
        }

    }


}
Board::Board(int boardSize):m_boardSize(boardSize)
{
    try
    {
        if(boardSize<=0)
            throw "The size most be biger then 0";
        m_board=new BoardRow[boardSize];
        for(int i=0;i<boardSize;i++)
        {
            m_board[i].setBoardRow(boardSize);
        }
    }
    catch(const char* exeption )
    {
        std::cout<<"Eror: "<<exeption<<std::endl;
    }

}


Board::~Board()
{
    delete[] m_board;

}

std::ostream& operator<<(std::ostream& out,const Board &board)const
{
    for(int i=0;i<board.m_boardSize;i++)
    {
        out<<board.m_board[i];
    }
    return out;
}


Board& Board::operator=(const Board& other)
{
    if(this==&other)
        return *this;

    delete[] m_board;
    m_boardSize=other.m_boardSize;
    m_board=new BoardRow[m_boardSize];
    for(int i=0;i<m_boardSize;i++)
    {
        m_board[i]=other.m_board[i];
    }
    return *this;

}
Board& Board::operator=(const char cha)
{
    try{
        if(cha!='X' && cha!='O' && cha!='.')
            throw IllegalCharException(cha);
        if(m_board)
        {
            for(int i=0;i<m_boardSize;i++)
            {
                m_board[i]=cha;
            }
        }

    }
    catch( IllegalCharException ex)
    {
       std::cout<<"Illegal cahr: "<<ex.theChar()<<std::endl;
    }

    return *this;


}

Content& Board::operator[](std::vector<int> index)
{
    if(index[0]<0 || index[0]>=m_boardSize ||index[1]<0 || index[1]>=m_boardSize)
       throw IllegalCoordinateException(index[0],index[1]);
    return m_board[index[0]][index[1]];

}
