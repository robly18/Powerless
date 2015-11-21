#ifndef SIMULATIONMODULE_H
#define SIMULATIONMODULE_H

#include <queue>
#include <iostream>
#include <SFML/Graphics.hpp>

class GameModule;

class SimulationModule {
public:
    void doTick(GameModule&); //Physics and AI calculations
    void pushToQueue(sf::Event&); //Pushes the event to the eventQueue so player AI knows what to do

    /*to be removed; debugging purposes only*/

    int x, y;

    /* */

private:
    std::queue<sf::Event> eventQueue; //todo: friend class playerAI
};

#endif
