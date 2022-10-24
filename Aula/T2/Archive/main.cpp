#include "cipher.hpp"
#include <stdlib.h>
#include <unistd.h>

int main()
{
bool in = true;
    while(in == true) //MENU
    {
      string input, matricula;
      string encrypted, decrypted;
      Cipher myCipher(matricula);
      char ch;

      cout << "--------------------------------------------------" << endl;
      cout << "CODIFICATOR AND DECODIFICATOR" << endl;
        cout<<"Select an option: "<<endl;
        cout<<"1.Enter with (matricula), used for encode(first step)"<<endl;
        cout<<"2. Insert the text to encode"<<endl;
        cout<<"3. Show Encrypted Text"<<endl;
        cout<<"4. Show Decrypted Text"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"You can change the (matricula) whenever you want"<<endl;
      cout << "--------------------------------------------------" << endl;

      cout<<"Select an option: "<<endl;
      cin>>ch;
      bool id = false;// Checa se foi colocado matricula

      if(ch == '1')
      {
        cout << "Please enter with your student ID(matricula): ";
        cin >> matricula;
        id = true;
        myCipher.NewConversionTable(matricula);
        cout<<"(Matricula), suceffuly added."<<endl<<sleep(1);

        continue;
      }

      if(ch=='2' && id==true)
      {
        cout<<"Insert the text to encode: "<<endl;
        cin>>input;
         //requisito 4 do enunciado
        encrypted = myCipher.Encrypt(input);
        decrypted = myCipher.Decrypt(encrypted);
        cout<<"Text, suceffuly added."<<endl<<sleep(1);

        continue;

      }

      if(ch=='3' && id==true)
      {
        cout << "Encrypted text: " << encrypted << endl;
        continue;
      }

      if(ch=='4' && id==true)
      {

        cout<<"Decrypted text: "<<endl<<decrypted<<endl;
        continue;
      }

      if(ch=='5')in == false;

        else
        {
          cout<<"Please insert a (Matricula), first!"<<endl;
          sleep(1);
          system("cls");
          continue;
        }
    }
    return 0;
}
