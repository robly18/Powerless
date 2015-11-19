#include <vector>
#include <memory>

class Menu {
    std::vector<std::smart_ptr<Menu>> submenus;
};
