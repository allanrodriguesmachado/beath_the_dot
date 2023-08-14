typedef int integerItemType;
const int itemMax = 100;

class stack {
private:
    int sizeStack;
    integerItemType *stackStructure;

public:
    stack();

    ~stack();

    void push(integerItemType itemStack);

    integerItemType pop();

    bool isEmpty() const;

    bool isFull() const;

    int size() const;

    void print();
};

