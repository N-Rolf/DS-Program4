#ifndef _QUEUE_H
#define _QUEUE_H
#include <string>

typedef std::string QElement;

class Queue
{
    public:
        Queue(short size=2);
        Queue(Queue &);
        ~Queue();
        void enqueue(const QElement);
        QElement dequeue();
        void view();
        bool isEmpty() const;
        bool isFull() const;
    private:
        const short Q_SIZE;
        typedef QElement * QPointer;
        QPointer queue;
        short head, tail;
        short numItems;
};

#endif