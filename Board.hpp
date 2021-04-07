#include "Direction.hpp"
#include <string>
#include <map>
#include <iostream>






using namespace std;


namespace ariel
{
    class Board
    {
        private:
        map<unsigned int , map<unsigned int,string >> board;
        int maximmumRow;
        int maximumCol;

        public:
        void post(unsigned int row , unsigned int column , Direction d , string s);
        string read(unsigned int row , unsigned int column , Direction d , unsigned int length);
        void show();
    
        

    };
}





















