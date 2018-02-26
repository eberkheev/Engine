#pragma once

template <class T, class Container>
class Stack
{
protected:
    Container container;
public:
    Stack() : container() {};
    ~Stack() : ~container() = default;

    bool empty() const { return container.empty(); }
    T* top() { return container.top(); }
    void push(const T& value) { container.push(value); }
    void pop() { container.pop(); }
};
