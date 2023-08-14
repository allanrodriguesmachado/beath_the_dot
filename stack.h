typedef int integerItemType;
const int itemMax = 100;

class stack {
private:
    int sizeStack;
    integerItemType *stackStructure;

public:
    //Construct
    stack();

    //Destruct
    ~stack();

    // Insert item stack -- PUSH
    void push(integerItemType itemStack);

    // Remove item stack - POP
    integerItemType pop();

    //Checking if the stack is empty
    bool isEmpty();

    //Checking if the stack is full
    bool isFull();

    // Print stack size
    void size();

    // Print stack output
    void print();
};

