#include "blockchain/blockchain.hpp"
#include <fstream>
int main()
{
    Blockchain block_chain = Blockchain();
    int i = 0;
    for(; 1 == 1 ;){
        i++;
        std::cout << "Mining Abbix block "<<i<<std::endl;
        block_chain.add_block(Block(i, "Block 1 Data"));
    }


    return 0;
}
