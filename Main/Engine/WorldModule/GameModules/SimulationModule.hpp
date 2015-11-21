#include "../MenuModule/MenuModule.hpp"
#include <queue>

class SimulationModule {
public:
    void doTick(WorldModule&); //Physics and AI calculations
    void pushToQueue(sf::Event&); //Pushes the event to the eventQueue so player AI knows what to do


private:
    std::queue<sf::Event> eventQueue; //todo: friend class playerAI
};
