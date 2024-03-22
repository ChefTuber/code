#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
// Create a window
sf::RenderWindow window(sf::VideoMode(800, 600), "Game");

// Main loop
while (window.isOpen())
{
// Handle events
sf::Event event;
while (window.pollEvent(event))
{
if (event.type == sf::Event::Closed)
{
window.close();
}
}

// Draw the window
window.clear();
window.display();
}

return 0;
}