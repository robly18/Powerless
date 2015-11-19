#include <vector>
#include <memory>
#include <SFML/Graphics.hpp>

class Menu {
public:
    Menu();
    std::vector<std::unique_ptr<Menu>> submenus;

    Menu *addMenu(Menu*);

    void render(sf::RenderTarget&);

private:
    virtual void drawOn(sf::RenderTarget&) = 0;
};

class TestMenu : public Menu {
public:
    TestMenu();
    sf::CircleShape s;
private:
    void drawOn(sf::RenderTarget&);
};
