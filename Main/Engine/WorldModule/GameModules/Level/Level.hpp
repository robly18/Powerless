#include <vector>
#include <array>
#include <SFML/Graphics.hpp>

struct CTile {
    enum CType {
        AIR,
        GROUND,
        SLOPELEFT,
        SLOPERIGHT,
        FENCELEFT
    } type;
    CType typeAt(const sf::Vector2f) const;
    void render(sf::RenderTarget&, sf::Vector2f);
    static const int CTILESIDE = 8;
};
typedef CTile::CType CType;

class Level {
public:
    Level();
    std::vector<CTile> leveldata;
    int width, height;

    void render(sf::RenderTarget&);
};
