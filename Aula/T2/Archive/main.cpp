#include "cipher.hpp"

int main()
{
    string input = "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";

    //em algum lugar do main aquele menu bonitinho !

    //create a Cipher Object (com codigo de matricula passado)
    Cipher myCipher("202012341234");
    myCipher.NewConversionTable("2018222233333"); //requisito 4 do enunciado


    string encrypted = myCipher.Encrypt(input);
    cout << "Original text: "  << input << endl;
    cout << "--------------------------------" << endl;
    cout << "Encrypted text: " << encrypted << endl;

    string decrypted = myCipher.Decrypt(encrypted);
    cout << "--------------------------------" << endl;
    cout << "Reverted text: "  << decrypted << endl;

    return 0;
}
