#include "cipher.hpp"


int main()
{
  string *input = new string;
  size_t *matricula = new size_t;
  string encrypted, decrypted;
  Cipher myCipher(*matricula);

    while(true) //MENU
    {

      char ch=0;

      cout << "--------------------------------------------------" << endl;
      cout << "CODIFICATOR AND DECODIFICATOR" << endl;
        cout<<"Select an option: "<<endl;
        cout<<"1.Enter with (matricula), used for encode(first step)"<<endl;
        cout<<"2. Insert the text to encode"<<endl;
        cout<<"3. Show Encrypted Text"<<endl;
        cout<<"4. Show Decrypted Text"<<endl;
        cout<<"5. Change your encrypt method"<<endl;
        cout<<"You can change the (matricula) whenever you want"<<endl;
      cout << "--------------------------------------------------" << endl;

      cout<<"Select an option: "<<endl;
      cin>>ch;
      bool id;// Checa se foi colocado matricula
      bool test;//Checa se foi encriptado

      if(ch == '1')
      {
        id = true;
        cout << "Please enter with your student ID(matricula): "<<endl;
        cin >> *matricula;
        Cipher myCipher(*matricula);
        cout<<"(Matricula), suceffuly added."<<endl;
        cout<<"Going Back to MENU";
        for(size_t i=0;i<2;i++)
        {
          sleep(1);
          cout<<".";
        }
        system("cls");
      }

      if(ch=='2' && id == true)
      {
        cout<<"Insert the text to encode: "<<endl;
        while(getline(cin, *input))
         if(*input != ""){
                break;
          }

        cout<<"Text, suceffuly added."<<endl;
        cout<<"Going back to MENU";
        for(size_t i=0;i<2;i++)
        {
          sleep(1);
          cout<<".";
        }
        system("cls");
        continue;
      }

      if(ch=='3' && id == true)
      {
        encrypted = myCipher.Encrypt(*input, *matricula);
        cout << "Encrypted text: " << encrypted << endl;
        test =true;
        continue;
      }

      if(ch=='4' && id == true)
      {
        if(test==true)
        {
          decrypted = myCipher.Decrypt(encrypted, *matricula);
        cout<<"Decrypted text: "<<endl<<decrypted<<endl;
      }else
      cout<<"Please Encrypt the text first."<<endl;
        continue;
      }

      if(ch=='5'&& id==true)
      {
        myCipher.NewConversionTable(*matricula);
        delete matricula;
        cout<<"Encrypt form changed sucefully!"<<endl;
        cout<<"Going back to MENU";
        for(size_t i=0;i<2;i++)
        {
          sleep(1);
          cout<<".";
        }
        system("cls");

        continue;
      }
      if (ch=='6')break;

        else if(id==false)
        {
          cout<<"Please insert a (Matricula), first!"<<endl;
          sleep(1);
          system("cls");
          continue;
        }
    }


    delete input;
    delete matricula;
    return 0;
}
