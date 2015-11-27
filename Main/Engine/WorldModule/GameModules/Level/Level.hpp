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
    static const int CTILESIDE = 4;
};

class Level {
public:
    Level();
    std::vector<CTile> leveldata;
    int width, height;
};
