#include <SFML/Graphics.hpp>
#include <iostream>

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
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
    };

    sf::Font font; // Font for drawing text on squares
};

int main() {
    ChessboardGUI chessboardGUI;

    // Set white pawn to e4
    chessboardGUI.setPiece(4, 0, 'P');

    while (chessboardGUI.window.isOpen()) {
        sf::Event event;
        while (chessboardGUI.window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                chessboardGUI.window.close();
            }
        }

        chessboardGUI.draw();
    }

    return 0;
}
