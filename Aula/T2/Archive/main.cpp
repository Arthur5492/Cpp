#include "cipher.hpp"


int main()
{
  string *input = new string; //Guarda o texto inserido
  size_t *matricula = new size_t; //Guarda a matricula inserida
  string encrypted, decrypted; // Variaveis para receber o incriptar e decriptar
  Cipher myCipher(*matricula); //Cria um objeto na classe cypher para guardar a matricula
  bool id;// Checa se foi colocado matricula
  bool test1=false,teste2=false;//Checa se foi encriptado e foi inserido texto

    while(true) //MENU
    {

      char ch=0;
C:\Users\arthu\OneDrive\Escola IFC\Cpp\Aula\T2\Archive\main.cpp
      cout << "--------------------------------------------------" << endl;
      cout << "CODIFICATOR AND DECODIFICATOR" << endl;
        cout<<"Select an option: "<<endl;
        cout<<"1.Enter with (matricula), used for encode(first step)"<<endl;
        cout<<"2. Insert the text to encode"<<endl;
        cout<<"3. Show Encrypted Text"<<endl;
        cout<<"4. Show Decrypted Text"<<endl;
        cout<<"5. Change your encrypt method"<<endl;
        cout<<"6. Exit."<<endl;
        cout<<"You can change the (matricula) whenever you want"<<endl;
      cout << "--------------------------------------------------" << endl;

      cout<<"Select an option: "<<endl;
      cin>>ch;

      if(ch == '1')
      {
        id = true;
        cout << "Please enter with your student ID(matricula): "<<endl;
        cin >> *matricula; //Guarda matrícula
        Cipher myCipher(*matricula); //Usa o objeto
        cout<<"(Matricula), suceffuly added."<<endl;
        cout<<"Going Back to MENU";
        for(size_t i=0;i<2;i++) //Só pra ficar bonitinho
        {
          sleep(1);
          cout<<".";
        }
        system("cls");
      }

      if(ch=='2' && id == true)
      {
        test1=true;
        cout<<"Insert the text to encode: "<<endl;
        while(getline(cin, *input)) //Pega o texto do usuario
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
        if(test1==true){
        encrypted = myCipher.Encrypt(*input, *matricula); //Pega o objeto encrypt do cipher e coloca em variável
        cout << "Encrypted text: " << encrypted << endl;
        teste2=true;
      }
      else cout<<"Please insert a text first";
      sleep(2);
      system("cls");

        continue;
      }

      if(ch=='4' && id == true)
      {
        if(teste2==true)
        {
          decrypted = myCipher.Decrypt(encrypted, *matricula);//Entra no objeto decrypt do cipher e joga na variavel
        cout<<"Decrypted text: "<<endl<<decrypted<<endl;
      }else
      cout<<"Please Encrypt the text first."<<endl;
      sleep(2);
      system("cls");
        continue;
      }

      if(ch=='5'&& id==true)
      {
        *matricula +=5; //Tentativa de trocar forma de deslocamento com a mesma matricula
        Cipher myCipher(*matricula);
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


    delete input; //Deleta as variaveis dinamicas
    delete matricula;
    return 0;
}
