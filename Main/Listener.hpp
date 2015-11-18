#ifndef LISTENER_H
#define LISTENER_H

#include <vector>

struct Message {
    int messageType;
};
class Listener;

class Messenger {
public:
    void addListener(Listener&);
    void sendMessage(Message);

private:
    std::vector<Listener*> listeners;
};


class Listener {
public:
    virtual void getMessage(Message) = 0;
};

#endif
