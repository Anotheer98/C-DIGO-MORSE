#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "Libreria.h"

using namespace std;

void gotoxy(int x, int y)
{
	HANDLE hcon =  GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);	
}

char Caracteres[500];
//int Palabra;

void pedir_PalabraCase1();
void Case_1(char *);
void pedir_PalabraCase2();
void Case_2(char *);
void pedir_PalabraCase3();
void Case_3(char *);

int main(){

    int opc;
    bool band = false;

  do{
        gotoxy(34, 0); cout <<" *** C O D I G O  M O R S E ***";
        gotoxy(32, 2); cout <<"1.- TRADUCIR UNA PALABRA A CODIGO MORSE: ";
        gotoxy(32, 3); cout <<"2.- CODIGO FONETICO (PHONETIC ALPHABET): ";
        gotoxy(32, 4); cout <<"3.- DICCIONARIO DE CODIGO MORSE  ";
        gotoxy(32, 5); cout <<"4.- INGRESAR PALABRAS DE CODIGO FONETICO Y TRADUCIR A LETRAS: ";
        gotoxy(32, 6); cout <<"5.- ELIGE UNA DE LAS SIGUIENTES OPCIONES: ";
        gotoxy(32, 7); cin >>opc;
        system("cls");

    while((opc <=0) && (band == false)){

    gotoxy(32, 5);  cout <<"ESCOGE UNA OPCION QUE SEA VALIDA! <<endl;"<<endl;
    gotoxy(32, 6);  cin >>opc;
    }

     if(opc >=1 && opc <=5){
        band = true;

        switch(opc){
            case 1:
                    pedir_PalabraCase1();
                    Case_1(Caracteres); break;
                                       
            case 2:
                    pedir_PalabraCase2(); 
                    Case_2(Caracteres);  break;

            case 3: 
                    pedir_PalabraCase3();
                    Case_3(Caracteres); break;        
        }
    }

  }while(opc !=0);

    getch();
    return 0;
}

void pedir_PalabraCase1(){

   cin.ignore();
   gotoxy(32, 1); cout <<"ESCRIBE LA PALABRA O LETRA QUE DESEAS TRADUCIR: ";
   gotoxy(32, 2); cin.getline(Caracteres, 500, '\n');

    strupr(Caracteres);
}

void Case_1(char *Palabra){

    while(*Palabra){

        switch(*Palabra){

         case 'A': cout <<" . -     ALPHA "   <<endl; Beep(1000, 150); Beep(1000, 700);                                   Sleep(500); break;
         case 'B': cout <<" - . . . BRAVO "   <<endl; Beep(1000, 700); Beep(1000, 150); Beep(1000, 150); Beep(1000, 150); Sleep(500); break;
         case 'C': cout <<" - . - . CHARLIE " <<endl; Beep(1000, 700); Beep(1000, 150); Beep(1000, 700); Beep(1000, 150); Sleep(500); break;
         case 'D': cout <<" - . .   DELTA "   <<endl; Beep(1000, 700); Beep(1000, 150); Beep(1000, 150);                  Sleep(500); break;
         case 'E': cout <<" .       ECHO "    <<endl; Beep(1000, 150);                                                    Sleep(500); break;
         case 'F': cout <<" . . - . FOXTROT " <<endl; Beep(1000, 150); Beep(1000, 150); Beep(1000, 700); Beep(1000, 150); Sleep(500); break;
         case 'G': cout <<" - - .   GOLF "    <<endl; Beep(1000, 700); Beep(1000, 150);                                   Sleep(500); break;
         case 'H': cout <<" . . . . HOTEL"    <<endl; Beep(1000, 150); Beep(1000, 150); Beep(1000, 150); Beep(1000, 150); Sleep(500); break;
         case 'I': cout <<" . .     INDIA "   <<endl; Beep(1000, 150); Beep(1000, 150);                                   Sleep(500); break;
         case 'J': cout <<" . - - - JULIET "  <<endl; Beep(1000, 150); Beep(1000, 700); Beep(1000, 700); Beep(1000, 700); Sleep(500); break;
         case 'K': cout <<" - . -   KILO "    <<endl; Beep(1000, 700); Beep(1000, 150); Beep(1000, 700);                  Sleep(500); break;
         case 'L': cout <<" . - . . LIMA "    <<endl; Beep(1000, 150); Beep(1000, 700); Beep(1000, 150); Beep(1000, 150); Sleep(500); break;
         case 'M': cout <<" - -     MIKE "    <<endl; Beep(1000, 700); Beep(1000, 700);                                   Sleep(500); break;
         case 'N': cout <<" - .     NOVEMBER" <<endl; Beep(1000, 700); Beep(1000, 150);                                   Sleep(500); break;
         case 'O': cout <<" - - -   OSCAR "   <<endl; Beep(1000, 700); Beep(1000, 700); Beep(1000, 700);                  Sleep(500); break;
         case 'P': cout <<" . - - . PAPA"     <<endl; Beep(1000, 150); Beep(1000, 700); Beep(1000, 700); Beep(1000, 150); Sleep(500); break;
         case 'Q': cout <<" - - . - QUEBEC "  <<endl; Beep(1000, 700); Beep(1000, 700); Beep(1000, 150); Beep(1000, 700); Sleep(500); break;
         case 'R': cout <<" . - .   ROMEO "   <<endl; Beep(1000, 150); Beep(1000, 700); Beep(1000, 700);                  Sleep(500); break;
         case 'S': cout <<" . . .   SIERRA "  <<endl; Beep(1000, 150); Beep(1000, 150); Beep(1000, 150);                  Sleep(500); break;
         case 'T': cout <<" -       TANGO "   <<endl; Beep(1000, 700);                                                    Sleep(500); break;
         case 'U': cout <<" . . -   UNIFORM " <<endl; Beep(1000, 150); Beep(1000, 150); Beep(1000, 700);                  Sleep(500); break;
         case 'V': cout <<" . . . - VICTOR "  <<endl; Beep(1000, 150); Beep(1000, 150); Beep(1000, 150); Beep(1000, 700); Sleep(500); break;
         case 'W': cout <<" . - -   WHISKEY " <<endl; Beep(1000, 150); Beep(1000, 700); Beep(1000, 700);                  Sleep(500); break;
         case 'X': cout <<" - . . - X-RAY"    <<endl; Beep(1000, 700); Beep(1000, 150); Beep(1000, 150); Beep(1000, 700); Sleep(500); break;
         case 'Y': cout <<" - . - - YANKEE "  <<endl; Beep(1000, 700); Beep(1000, 150); Beep(1000, 700); Beep(1000, 700); Sleep(500); break;
         case 'Z': cout <<" - - . . ZULU "    <<endl; Beep(1000, 700); Beep(1000, 700); 
         Beep(1000, 150); Beep(1000, 150); Sleep(500); break;

        }
        Palabra++;
    }
    cout <<"Presiona una tecla para volver al menu." <<endl;
    getch(); 
    system("cls");
}

void pedir_PalabraCase2(){

    cin.ignore();
    cout <<"ESCRIBE UNA PALABRA DEL CODIGO FONETICO " <<endl;
    cin.getline(Caracteres, 500, '\n');
    strupr(Caracteres);
}

void Case_2(char *Palabra){

    while(*Palabra){

        switch(*Palabra){

           case 'A': cout <<"ALPHA "           <<endl; break;
           case 'B': cout <<"BRAVO "           <<endl; break;
           case 'C': cout <<"CHARLIE "         <<endl; break;
           case 'D': cout <<"DELTA "           <<endl; break;
           case 'E': cout <<"ECHO "            <<endl; break; 
           case 'F': cout <<"FOXROT"           <<endl; break;
           case 'G': cout <<"GOLF "            <<endl; break;
           case 'H': cout <<"HOTEL "           <<endl; break;
           case 'I': cout <<"INDIA "           <<endl; break;
           case 'J': cout <<"JULIET"           <<endl; break; 
           case 'K': cout <<"KILO "            <<endl; break;
           case 'L': cout <<"LIMA "            <<endl; break;
           case 'M': cout <<"MIKE (Maik) "     <<endl; break; 
           case 'N': cout <<"NOVEMBER "        <<endl; break;
           case 'O': cout <<"OSCAR "           <<endl; break;
           case 'P': cout <<"PAPA "            <<endl; break;
           case 'Q': cout <<"QUEBEC"           <<endl; break; 
           case 'R': cout <<"ROMEO "           <<endl; break;
           case 'S': cout <<"SIERRA "          <<endl; break;
           case 'T': cout <<"TANGO "           <<endl; break;
           case 'U': cout <<"UNIFORM "         <<endl; break;
           case 'V': cout <<"VICTOR "          <<endl; break;
           case 'W': cout <<"WHISKEY "         <<endl; break; 
           case 'X': cout <<"X-RAY "           <<endl; break;
           case 'Y': cout <<"YANKEE "          <<endl; break;
           case 'Z': cout <<"ZULU "            <<endl; break;

        }
        Palabra++;
    } 
      cout <<"Presiona una tecla para volver al menu " <<endl<<endl;
      getch(); 
      system("cls");
}

void pedir_PalabraCase3(){

    cin.ignore();
    cout <<"Escribe, sin espacios, el codigo Morse que deseas traducir. " <<endl;
    cin.getline(Caracteres, 500, '\n');
}

void Case_3(char *Palabra){

    if(strcmp(Caracteres, A) == 0){
        cout <<"A"<<endl;
    }
    if(strcmp(Caracteres, B) == 0){
        cout <<"B"<<endl;
    }
    if(strcmp(Caracteres, C) == 0){
        cout <<"C"<<endl;
    }
    if(strcmp(Caracteres, D) == 0){
        cout <<"D"<<endl;
    }
    if(strcmp(Caracteres, E) == 0){
        cout <<"E"<<endl;
    }
    if(strcmp(Caracteres, F) == 0){
        cout <<"G"<<endl;
    }
    if(strcmp(Caracteres, G) == 0){
        cout <<"G"<<endl;
    }
    if(strcmp(Caracteres, H) == 0){
        cout <<"H"<<endl;
    }
    if(strcmp(Caracteres, I) == 0){
        cout <<"I"<<endl;
    }
    if(strcmp(Caracteres, J) == 0){
        cout <<"J"<<endl;
    }
    if(strcmp(Caracteres, K) == 0){
        cout <<"K"<<endl;
    }
    if(strcmp(Caracteres, L) == 0){
        cout <<"L"<<endl;
    }
    if(strcmp(Caracteres, M) == 0){
        cout <<"M"<<endl;
    }
    if(strcmp(Caracteres, N) == 0){
        cout <<"N"<<endl;
    }
    if(strcmp(Caracteres, O) == 0){
        cout <<"O"<<endl;
    }
    if(strcmp(Caracteres, P) == 0){
        cout <<"P"<<endl;
    }
    if(strcmp(Caracteres, Q) == 0){
        cout <<"Q"<<endl;
    }
    if(strcmp(Caracteres, R) == 0){
        cout <<"R"<<endl;
    }
    if(strcmp(Caracteres, S) == 0){
        cout <<"S"<<endl;
    }
    if(strcmp(Caracteres, T) == 0){
        cout <<"T"<<endl;
    }
    if(strcmp(Caracteres, U) == 0){
        cout <<"U"<<endl;
    }
    if(strcmp(Caracteres, V) == 0){
        cout <<"V"<<endl;
    }
    if(strcmp(Caracteres, W) == 0){
        cout <<"W"<<endl;
    }
    if(strcmp(Caracteres, X) == 0){
        cout <<"X"<<endl;
    }
    if(strcmp(Caracteres, Y) == 0){
        cout <<"Y"<<endl;
    }
    if(strcmp(Caracteres, Z) == 0){
        cout <<"Z"<<endl;
    }
    
    cout <<"Presiona una tecla para continuar: " <<endl;
    getch();
    cout <<endl;
    system("cls");
}

