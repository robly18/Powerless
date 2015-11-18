#include "Listener.hpp"

void Messenger::addListener(Listener &l) {
    listeners.push_back(&l);
}

void Messenger::sendMessage(Message m) {
    for (auto &l : listeners) {
        l->getMessage(m);
    }
}
