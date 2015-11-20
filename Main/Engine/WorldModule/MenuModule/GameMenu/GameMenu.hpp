
class GameMenu : public Menu {
private:
    void drawOn(sf::RenderTarget&);
    void actOnEvent(sf::Event&, WorldModule&);
    void doUpdate(WorldModule&);
};
