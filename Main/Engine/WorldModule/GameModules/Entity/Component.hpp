#ifndef COMPONENT_H
#define COMPONENT_H

#include <SFML/Graphics.hpp>

struct Message {
    enum {
        SETPOS,
        MOVE,
        ACCELERATE
    } type;
    union {
        struct {
            float x, y;
        } pos;
    };
};

class Component {
public:
    virtual void getMessage(const Message&);
};

#endif

