#include <iostream>

std::string CeaserCypher(std::string cypherText, int shiftAmount);

int main(){
    std::string cypherText; //Initialize CypherText Variable

    //std::cout << "Enter your cypher text: ";
    //std::cin >> cypherText;
    //for(int i = 0; i < 127; i++){
    //    std::cout << i << ": " << (char) i << std::endl;
    //}
    std::cout << "Enter your cypher text: ";
    std::cin >> cypherText;
    std::cout << "Here is a list of possible clear texts: " << std::endl;
    for(int i = 0; i < 94; i++){
        std::cout << i + 1 << ": " << CeaserCypher(cypherText, i) << std::endl;
        std::cout << "=======================================================" << std::endl;
    }
    return 0;
}
/**
 * @brief Returns text encrypted/decrypted by the ceaser cypher.
 * 
 * @param cypherText the cypher text to be shifted
 * @param shiftAmount the amount each letter will be shifted by
 * @return std::string clearText the shifted text
 */

std::string CeaserCypher(std::string cypherText, int shiftAmount){
    std::string clearText = "";
    char letter;
    for(int i = 0; i < cypherText.length(); i++){
        if(cypherText[i] + shiftAmount > 126){
            clearText += 32 + shiftAmount - (int) cypherText.length();
        }
        else
            clearText += cypherText[i] + shiftAmount;
    }
    return clearText;
}