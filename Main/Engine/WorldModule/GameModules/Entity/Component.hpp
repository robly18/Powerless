#ifndef COMPONENT_H
#define COMPONENT_H

#include <SFML/Graphics.hpp>

struct Message {
    enum {
        SETPOS,
        MOVE,
        ACCELERATE,
        SETSTATE,
        UNSTATE
    } type;
    union {
        struct {
            float x, y;
        } pos;
        int state;
    };
};

class Component {
public:
    virtual void getMessage(const Message&);
};

#endif

