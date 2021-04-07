#include "Board.hpp"
#include <map>
#include <stdio.h>

using namespace ariel;

void Board::post(unsigned int row ,unsigned int column,Direction d , string str )
{
        unsigned int j;
        unsigned int tempcolumn = column ;  
        unsigned int temprow = row;

            if (str.length()<= 0 )
            {
                return ;
            }


        if(d == Direction::Horizontal)
        {

            for(unsigned int k = 0 ; k<str.length();k++)
            {
                board[row][tempcolumn] = str.at(k);
                tempcolumn ++;

            }
  
        }


        if(d == Direction::Vertical)
        {

            for(unsigned int k = 0 ; k<str.length();k++)
            {
                board[temprow][column] = str.at(k);
                temprow++;
            
            }
        }
}
string Board::read(unsigned int row , unsigned int column , Direction d , unsigned int length)
{

        string str;
        unsigned int tempcolumn = column ;  
        unsigned int temprow = row;


        if(d == Direction :: Horizontal)
        {
            
            for( unsigned int k = 0 ; k <length ; k++)
            {
                if(board[row][tempcolumn].empty())
                {
                   board[row][tempcolumn] = '_'; 
                }
                str +=board[row][tempcolumn].at(0);
                tempcolumn++;

            }


        }


        if(d == Direction :: Vertical)


        for (unsigned int i = 0; i < length; i++)
        {
            if (board[temprow][tempcolumn].empty())
            {
                board[temprow][column] = '_';
            }
                str += board[temprow][column].at(0);
                temprow++;

        }

    return str;
}


void Board::show()
{

    map<unsigned int , map<unsigned int ,string> > ::iterator itr;
    map<unsigned int , string>::iterator ptr;



    for(itr = board.begin(); itr!=board.end(); itr++)
    {

        for(ptr = itr->second.begin(); ptr!= itr -> second.end(); ptr++)
        {   
            cout<<ptr->second;
        }
        cout << endl;
        
    }
}

