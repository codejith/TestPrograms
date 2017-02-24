 #include <iostream>

class A {
public:
    A(int a_): _a(a_)
    {}

private:
    int                      _a;
};

class B : public A {
public:


private:
    
};

class C : public B {
public:


private:
    
};

int main()
{
    C ob;
    

    return 0;
}
