#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "Vector2.hpp"
#include <string>

using namespace sf;
using namespace std;

void Update(int &keyTime, RenderWindow &window, Sprite &chessboard);
void Draw(RenderWindow &window, Sprite &chessboard, Sprite &bielaveza);
int sizeofchessboard = 665;
//float sizeofchessboard1 ;
int s;
int r;
int q = 5;
bool rr = 0;
bool oo = 0;
//int w;
int w = -1;
//float sizeofchessboard3;

float sizeofchessboard1 = (sizeofchessboard/665); //size
    
    
    //position
    float sizeofchessboard2 = (sizeofchessboard - (1 * (sizeofchessboard/16)));
    float sizeofchessboard3 = (sizeofchessboard - (3 * (sizeofchessboard/16)));
    float sizeofchessboard4 = (sizeofchessboard - (5 * (sizeofchessboard/16)));
    float sizeofchessboard5 = (sizeofchessboard - (7 * (sizeofchessboard/16)));
    float sizeofchessboard6 = (sizeofchessboard - (9 * (sizeofchessboard/16)));
    float sizeofchessboard7 = (sizeofchessboard - (11 * (sizeofchessboard/16)));
    float sizeofchessboard8 = (sizeofchessboard - (13 * (sizeofchessboard/16)));
    float sizeofchessboard9 = (sizeofchessboard - (15 * (sizeofchessboard/16)));


    char info [2];

    
//int NumericalPostion( string squares1, string WhiteRook1.pos){

//}       

class Square {
public:
	float pos1 = 0;
    float pos2 = 0;
    int whoisthere; // 0 = no one, 1 = white, 2 = black
    char info [2];




};


class Piece{
public:
int id;
int position;
string pos;


};

int main()
{
int keyTime = 8;
 
    

    
//a
    
Square a1;
a1.pos1 = sizeofchessboard9;
a1.pos2 = sizeofchessboard2;
a1.info[2] = 0,0;

Square a2;
a2.pos1 = sizeofchessboard9;
a2.pos2 = sizeofchessboard3;
a2.info[2] = 0,8;

Square a3;
a3.pos1 = sizeofchessboard9;
a3.pos2 = sizeofchessboard4;
a3.info[2] = 0,16;

Square a4;
a4.pos1 = sizeofchessboard9;
a4.pos2 = sizeofchessboard5;
a4.info[2] = 0,24;

Square a5;
a5.pos1 = sizeofchessboard9;
a5.pos2 = sizeofchessboard6;
a5.info[2] = 0,32;

Square a6;
a6.pos1 = sizeofchessboard9;
a6.pos2 = sizeofchessboard7;
a6.info[2] = 0,40;

Square a7;
a7.pos1 = sizeofchessboard9;
a7.pos2 = sizeofchessboard8;
a7.info[2] = 0,48;

Square a8;
a8.pos1 = sizeofchessboard9;
a8.pos2 = sizeofchessboard9;
a8.info[2] = 0,56;

//b

Square b1;
b1.pos1 = sizeofchessboard8;
b1.pos2 = sizeofchessboard2;

Square b2;
b2.pos1 = sizeofchessboard8;
b2.pos2 = sizeofchessboard3;

Square b3;
b3.pos1 = sizeofchessboard8;
b3.pos2 = sizeofchessboard4;

Square b4;
b4.pos1 = sizeofchessboard8;
b4.pos2 = sizeofchessboard5;

Square b5;
b5.pos1 = sizeofchessboard8;
b5.pos2 = sizeofchessboard6;

Square b6;
b6.pos1 = sizeofchessboard8;
b6.pos2 = sizeofchessboard7;

Square b7;
b7.pos1 = sizeofchessboard8;
b7.pos2 = sizeofchessboard8;

Square b8;
b8.pos1 = sizeofchessboard8;
b8.pos2 = sizeofchessboard9;


//c

Square c1;
c1.pos1 = sizeofchessboard7;
c1.pos2 = sizeofchessboard2;

Square c2;
c2.pos1 = sizeofchessboard7;
c2.pos2 = sizeofchessboard3;

Square c3;
c3.pos1 = sizeofchessboard7;
c3.pos2 = sizeofchessboard4;

Square c4;
c4.pos1 = sizeofchessboard7;
c4.pos2 = sizeofchessboard5;

Square c5;
c5.pos1 = sizeofchessboard7;
c5.pos2 = sizeofchessboard6;

Square c6;
c6.pos1 = sizeofchessboard7;
c6.pos2 = sizeofchessboard7;

Square c7;
c7.pos1 = sizeofchessboard7;
c7.pos2 = sizeofchessboard8;

Square c8;
c8.pos1 = sizeofchessboard6;
c8.pos2 = sizeofchessboard9;

//d

Square d1;
d1.pos1 = sizeofchessboard6;
d1.pos2 = sizeofchessboard2;

Square d2;
d2.pos1 = sizeofchessboard6;
d2.pos2 = sizeofchessboard3;

Square d3;
d3.pos1 = sizeofchessboard6;
d3.pos2 = sizeofchessboard4;

Square d4;
d4.pos1 = sizeofchessboard6;
d4.pos2 = sizeofchessboard5;

Square d5;
d5.pos1 = sizeofchessboard6;
d5.pos2 = sizeofchessboard6;

Square d6;
d6.pos1 = sizeofchessboard6;
d6.pos2 = sizeofchessboard7;

Square d7;
d7.pos1 = sizeofchessboard6;
d7.pos2 = sizeofchessboard8;

Square d8;
d8.pos1 = sizeofchessboard6;
d8.pos2 = sizeofchessboard9;

//e

Square e1;
e1.pos1 = sizeofchessboard5;
e1.pos2 = sizeofchessboard2;

Square e2;
e2.pos1 = sizeofchessboard5;
e2.pos2 = sizeofchessboard3;

Square e3;
e3.pos1 = sizeofchessboard5;
e3.pos2 = sizeofchessboard4;

Square e4;
e4.pos1 = sizeofchessboard5;
e4.pos2 = sizeofchessboard5;

Square e5;
e5.pos1 = sizeofchessboard5;
e5.pos2 = sizeofchessboard6;

Square e6;
e6.pos1 = sizeofchessboard5;
e6.pos2 = sizeofchessboard7;

Square e7;
e7.pos1 = sizeofchessboard5;
e7.pos2 = sizeofchessboard8;

Square e8;
e8.pos1 = sizeofchessboard5;
e8.pos2 = sizeofchessboard9;

//f

Square f1;
f1.pos1 = sizeofchessboard4;
f1.pos2 = sizeofchessboard2;

Square f2;
f2.pos1 = sizeofchessboard4;
f2.pos2 = sizeofchessboard3;

Square f3;
f3.pos1 = sizeofchessboard4;
f3.pos2 = sizeofchessboard4;

Square f4;
f4.pos1 = sizeofchessboard4;
f4.pos2 = sizeofchessboard5;

Square f5;
f5.pos1 = sizeofchessboard4;
f5.pos2 = sizeofchessboard6;

Square f6;
f6.pos1 = sizeofchessboard4;
f6.pos2 = sizeofchessboard7;

Square f7;
f7.pos1 = sizeofchessboard4;
f7.pos2 = sizeofchessboard8;

Square f8;
f8.pos1 = sizeofchessboard4;
f8.pos2 = sizeofchessboard9;

//g

Square g1;
g1.pos1 = sizeofchessboard3;
g1.pos2 = sizeofchessboard2;

Square g2;
g2.pos1 = sizeofchessboard3;
g2.pos2 = sizeofchessboard3;

Square g3;
g3.pos1 = sizeofchessboard3;
g3.pos2 = sizeofchessboard4;

Square g4;
g4.pos1 = sizeofchessboard3;
g4.pos2 = sizeofchessboard5;

Square g5;
g5.pos1 = sizeofchessboard3;
g5.pos2 = sizeofchessboard6;

Square g6;
g6.pos1 = sizeofchessboard3;
g6.pos2 = sizeofchessboard7;

Square g7;
g7.pos1 = sizeofchessboard3;
g7.pos2 = sizeofchessboard8;

Square g8;
g8.pos1 = sizeofchessboard3;
g8.pos2 = sizeofchessboard9;

//h

Square h1;
h1.pos1 = sizeofchessboard2;
h1.pos2 = sizeofchessboard2;

Square h2;
h2.pos1 = sizeofchessboard2;
h2.pos2 = sizeofchessboard3;

Square h3;
h3.pos1 = sizeofchessboard2;
h3.pos2 = sizeofchessboard4;

Square h4;
h4.pos1 = sizeofchessboard2;
h4.pos2 = sizeofchessboard5;

Square h5;
h5.pos1 = sizeofchessboard2;
h5.pos2 = sizeofchessboard6;

Square h6;
h6.pos1 = sizeofchessboard2;
h6.pos2 = sizeofchessboard7;

Square h7;
h7.pos1 = sizeofchessboard2;
h7.pos2 = sizeofchessboard8;

Square h8;
h8.pos1 = sizeofchessboard2;
h8.pos2 = sizeofchessboard9;


Square squares[64] = {a1, b1, c1, d1, e1, f1, g1, h1, a2, b2, c2, d2, e2, f2, g2, h2, a3, b3, c3, d3, e3, f3, g3, h3, a4, b4, c4, d4, e4, f4, g4, h4, a5, b5, c5, d5, e5, f5, g5, h5, a6, b6, c6, d6, e6, f6, g6, h6, a7, b7, c7, d7, e7, f7, g7, h7, a8, b8, c8, d8, e8, f8, g8, h8};
string squares1[64] = {"a1", "b1", "c1", "d1", "e1", "f1", "g1", "h1", "a2", "b2", "c2", "d2", "e2", "f2", "g2", "h2", "a3", "b3", "c3", "d3", "e3", "f3", "g3", "h3", "a4", "b4", "c4", "d4", "e4", "f4", "g4", "h4", "a5", "b5", "c5", "d5", "e5", "f5", "g5", "h5", "a6", "b6", "c6", "d6", "e6", "f6", "g6", "h6", "a7", "b7", "c7", "d7", "e7", "f7", "g7", "h7", "a8", "b8", "c8", "d8", "e8", "f8", "g8", "h8"};

int c;


//Pieces
 Piece WhiteRook1;
WhiteRook1.id = 8;
WhiteRook1.position = info[1];
WhiteRook1.pos = "e4"; //position of the white rook



for(int u = 0; u < 64; u++ ){
    if(WhiteRook1.pos == squares1[u] ){
    w = (u + 1);
        cout << "w =";
            cout << w << endl;

                // Column calculation code
                     int c = w % 8;
                        cout << "c = " << c << endl;


break;
} 

}
//rank calculation code
std::string numericPart = WhiteRook1.pos.substr(1);
int r = std::stoi(numericPart);

//int r = (((w + 8) - 1) % 8);


if(oo == 0){
    cout << "r =";

cout << r << endl;
oo = 1;
}








//gets coulumns to the right edge of the board
int p[8];
for(int s = 1; s <= (8 - c); s++){
if (s != c){

p[s] = (c + s);
}



//gets coulumns to the left edge of the board

}

int m[8];
for(int d = 1; d <= (8 - (8 - c)); d++){
    if (d != c){
m[d] = (d);
    }
}


//calculates ranks under the rook

int t[8] = {0};
for(int e = 1; e <= (8 - (8 - r)); e++)
{
    if (e != r)
    {
        t[e] = (e);
     }   
     if(t[e] != 0){
     cout << t[e] ;
     }
}
cout << endl;

                        // cout << t[e] << "\n";


//calculates ranks above the rook
           
int b[8] = {0};
for(int e = r; e < 9; e++)
{
    if (e != r)
    {
        b[e] = (e);
     }   
     if(b[e] != 0){
     cout << b[e] ;
     }
}
cout << endl;












    // create the window
    sf::RenderWindow window(sf::VideoMode(665, 665), "My window");
    
        sf::Texture chessboardpng;
        if (!chessboardpng.loadFromFile("chessboard1.png")) {
            return 0;
        }
    sf::Sprite chessboard;
        chessboard.setTexture(chessboardpng);
        //chessboard.setPosition(sf::Vector2f(0.f, 0.f));
                chessboard.setPosition(0, 0);

chessboard.setScale(sizeofchessboard1, sizeofchessboard1);

sf::Texture kral;
        if (!kral.loadFromFile("image (10).png")) {
            return 0;
        }
    sf::Sprite kralbiely;
        kralbiely.setTexture(kral);
        //chessboard.setPosition(sf::Vector2f(0.f, 0.f));
                kralbiely.setPosition(h3.pos1, h3.pos2);


                sf::Texture vezatexture;
        if (!vezatexture.loadFromFile("Chess-Pieces.png", sf::IntRect(0, 0, 132, 132)))
{
    return 1; // error... 
}
    sf::Sprite bielaveza;
        bielaveza.setTexture(vezatexture);
        //chessboard.setPosition(sf::Vector2f(0.f, 0.f));
               bielaveza.setOrigin(66, 66);
                bielaveza.setPosition(h3.pos1, h3.pos2);
        bielaveza.setScale(0.62973484848f, 0.62973484848f);


        

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
                }

        



        window.clear();              
       
             Update(keyTime, window, chessboard);
	        Draw(window, chessboard, bielaveza);



                //window.draw(kralbiely);
                //	window.display();
                    
                	//window.display();

    }
    //cout << a1.pos;
   //std::cout << sizeofchessboard3;
    
    return 0;
}


void Update(int &keyTime, RenderWindow &window, Sprite &chessboard)
{

}

void Draw(RenderWindow &window, Sprite &chessboard, Sprite &bielaveza)
{
	window.clear(Color::White);

	//Draw stuff
	//window.draw(retard);
    window.draw(chessboard);
    window.draw(bielaveza);
	window.display();
}

       

       
        //Vecne zabudnutie :{
        /*if (w != -1) { 

//coulumn
c = (w - 1) % 8;
//c = (w % 8);

//if(rr == 0){
cout << "c =";

cout << c << endl;
rr = 1;
//}

}
*/


    // Column calculation code
    //c = (w - 1) % 8;
   // cout << "c = " << c << endl;

        /*if(q == 5){

    cout << r;
    cout << "\n";
q = 1;
continue;
}*/
        
        // draw everything here...
        // window.draw(...);
      /* sf::RenderTexture renderTexture;
if (!renderTexture.create(500, 500))
{
    return 2;
}
        sf::CircleShape shape(50.f);

// set the shape color to green
shape.setFillColor(sf::Color(100, 250, 50));

    sf::Texture texture;
if (!texture.loadFromFile("image.jpg"))
{
    return 1;
}
sf::Sprite sprite(texture);
window.draw(sprite);
if (!texture.loadFromFile("image.jpg", sf::IntRect(10, 10, 32, 32)))
{
    // error...
}

        // end the current frame
        
        
        
        for(rotation = 1; rotation < 360; ++rotation){
                 if (rotation == 359){
                        rotation = 1;
                                        }
                }  
 
        */

       // How to use Vector2?
       /*sf::Font font;
if (!font.loadFromFile("arial.ttf"))
{
    return 0;// error...
}
// select the font
text.setFont(font); // font is a sf::Font

// set the string to display
text.setString("Hello world");

// set the character size
text.setCharacterSize(24); // in pixels, not points!

// set the color
text.setFillColor(sf::Color::Blue);

// set the text style
text.setStyle(sf::Text::Bold | sf::Text::Underlined);
text.setPosition(sf::Vector2f(1000.f, 500.f));

   float rotation;
    
text.rotate(rotation);*/
       // clear the window with black color
       /*sf::Texture texture;
        if (!texture.loadFromFile("image.jpg")) {
            return 0;
        }
    sf::Sprite retard;
        retard.setTexture(texture);
        retard.setPosition(sf::Vector2f(1000.f, 50.f));
*/
/*if(keyTime < 8)
		keyTime++;

	if (Keyboard::isKeyPressed(Keyboard::A) && retard.getPosition().x > 0)
	{
		retard.move(-5.f, 0.f);
		keyTime = 0;
    }*/
    //How to use Vector2?
    /*for (s = 1; s < 9; s++){
     sizeofchessboard3 = (sizeofchessboard - (s * (sizeofchessboard/16)));

    }
*/
