#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#include <future>

const int BOARD_SIZE = 8;
const int TILE_SIZE = 80;

class ChessboardGUI {
public:
    sf::RenderWindow window;
    sf::RectangleShape squares[BOARD_SIZE][BOARD_SIZE];

    ChessboardGUI() : window(sf::VideoMode(BOARD_SIZE * TILE_SIZE, BOARD_SIZE * TILE_SIZE), "Chessboard") {
        if (!font.loadFromFile("arial.ttf")) {
            // Handle loading error
            std::cerr << "Error loading font." << std::endl;
        }

        // Initialize the chessboard squares
        for (int i = 0; i < BOARD_SIZE; ++i) {
            for (int j = 0; j < BOARD_SIZE; ++j) {
                squares[i][j].setSize(sf::Vector2f(TILE_SIZE, TILE_SIZE));
                squares[i][j].setPosition(i * TILE_SIZE, j * TILE_SIZE);

                // Alternate colors for chessboard
                if ((i + j) % 2 == 0) {
                    squares[i][j].setFillColor(sf::Color(209, 139, 71)); // Light color
                } else {
                    squares[i][j].setFillColor(sf::Color(139, 69, 19)); // Dark color
                }
            }
        }
    }

    void draw() {
        window.clear();

        // Draw the chessboard squares
        for (int i = 0; i < BOARD_SIZE; ++i) {
            for (int j = 0; j < BOARD_SIZE; ++j) {
                window.draw(squares[i][j]);

                // Draw letters on the squares
                sf::Text text;
                text.setFont(font);
                text.setCharacterSize(30);
                text.setFillColor(sf::Color::Black);
                text.setString(board[i][j]);
                text.setPosition(i * TILE_SIZE + TILE_SIZE / 4, j * TILE_SIZE + TILE_SIZE / 4);
                window.draw(text);
            }
        }

        window.display();
    }

    // Set the piece for a specific square
    void setPiece(int x, int y, char piece) {
        board[x][y] = piece;
    }

private:
    char board[BOARD_SIZE][BOARD_SIZE] = {
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
    };

    sf::Font font; // Font for drawing text on squares
};

int StartingPos(ChessboardGUI& chessboardGUI){

    chessboardGUI.setPiece(0, 0, 'r');
    chessboardGUI.setPiece(1, 0, 'n');
    chessboardGUI.setPiece(2, 0, 'b');
    chessboardGUI.setPiece(3, 0, 'q');
    chessboardGUI.setPiece(4, 0, 'k');
    chessboardGUI.setPiece(5, 0, 'b');
    chessboardGUI.setPiece(6, 0, 'n');
    chessboardGUI.setPiece(7, 0, 'r');

    chessboardGUI.setPiece(0, 7, 'R');
    chessboardGUI.setPiece(1, 7, 'N');
    chessboardGUI.setPiece(2, 7, 'B');
    chessboardGUI.setPiece(3, 7, 'Q');
    chessboardGUI.setPiece(4, 7, 'K');
    chessboardGUI.setPiece(5, 7, 'B');
    chessboardGUI.setPiece(6, 7, 'N');
    chessboardGUI.setPiece(7, 7, 'R');


for(int i = 0; i < 8; i++){
   
 chessboardGUI.setPiece(i, 6, 'P');

}
for(int i = 0; i < 8; i++){
   
 chessboardGUI.setPiece(i, 1, 'p');

}
return 2;
}

int PieceMove(ChessboardGUI& chessboardGUI, int a, int b, int c, int d, char e){
  chessboardGUI.setPiece(a, b, ' ');  
    chessboardGUI.setPiece(c, d, e);  
return 4;
}


int main() {
    ChessboardGUI chessboardGUI;
std::cout << StartingPos(chessboardGUI);
    // Function for getting moves asynchronously
    auto getMovesAsync = std::async(std::launch::async, [&chessboardGUI]() {
        int a, b, c, d;
        char e;

        while (chessboardGUI.window.isOpen()) {
            std::cout << "Enter move (start_x start_y end_x end_y piece): ";
            std::cin >> a >> b >> c >> d >> e;

            // Perform the move
            PieceMove(chessboardGUI, a, b, c, d, e);
        }
    });

    while (chessboardGUI.window.isOpen()) {
        sf::Event event;
        while (chessboardGUI.window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                chessboardGUI.window.close();
            }
        }

        chessboardGUI.draw();
    }

    // Wait for the input thread to finish
    getMovesAsync.wait();

    return 0;
}
 //std::cout << StartingPos(chessboardGUI);