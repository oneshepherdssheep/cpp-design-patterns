# singleton

## definition

General definition : 

> Ensure a class has one instance and provide a global point of access to it.

I like this definition a lot, I have nothing to add here.

## warnings

The Singleton pattern, is not the panacea. Among all design patterns, it is the one
which is not always advised to use as a primary solution for a particular problem. 
Most of the time there is another way of solving our problem.

Sometimes we only wants the ```Ensure a class has one instance``` part of the definition.
If it is the case, we can use static classes.

Other times we only wants the ```...and provide a global point of access to it (a particular instance).``` part of the 
definition. If it is the case, we can solve it using another design pattern called ```Service Locator```.

So the bottom line is, to use Singleton with caution.

## implementation

```c++

class Singleton {
    public:
        static Singleton& instance(){
            static Singleton *instance_m = new Singleton();
            return *instance_m;
        }
    private:
        Singleton(){};
};
```

That's it.