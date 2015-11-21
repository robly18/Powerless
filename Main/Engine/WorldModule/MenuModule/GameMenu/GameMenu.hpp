#include "../Menu.hpp"


class GameMenu : public Menu {
    GameMenu();
private:
    void drawOn(sf::RenderTarget&);
    void actOnEvent(sf::Event&, WorldModule&);
    void doUpdate(WorldModule&);
};
