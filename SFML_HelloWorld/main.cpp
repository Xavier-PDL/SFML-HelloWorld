#define SFML_STATIC
#include <SFML/Graphics.hpp>
#ifdef _DEBUG
#pragma comment(lib, "sfml-system-d.lib")
#pragma comment(lib, "sfml-window-d.lib")
#pragma comment(lib, "sfml-graphics-d.lib")
#else
#pragma comment(lib, "sfml-system.lib")
#pragma comment(lib, "sfml-window.lib")
#pragma comment(lib, "sfml-graphics.lib")
#endif

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Hello World!");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear(sf::Color(0xff, 0, 0xff, 0xff));
		window.display();
	}

	return 0;
}