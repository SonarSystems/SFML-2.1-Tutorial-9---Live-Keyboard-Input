#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode( 600, 600 ), "SFML WORK!" );

	while ( window.isOpen( ) )
	{
		sf::Event event;

		while ( window.pollEvent( event ) )
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

				break;

			}
		}

		if ( sf::Keyboard::isKeyPressed( sf::Keyboard::Space ) )
		{
			std::cout << "Jump PLayer" << std::endl;
		}

		window.clear( );

		window.display( );
	}
}