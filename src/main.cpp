#include "blockchain/blockchain.hpp"






int main(){

int times;

std::cout << "How many Blocks do you want to Mine?" << std::endl;
std::cin >> times;


for (int mine = 0; mine <= times; mine++){
        Blockchain block_chain = Blockchain();

    std::cout << "Mining block... " << std::endl;
    block_chain.add_block(Block(1, "Block 1 Data"));

    std::cout << "Mining block... " << std::endl;
    block_chain.add_block(Block(2, "Block 2 Data"));

    std::cout << "Mining block... " << std::endl;
    block_chain.add_block(Block(3, "Block 3 Data"));
    
}



}

