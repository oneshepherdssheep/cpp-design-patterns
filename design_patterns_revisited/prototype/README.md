# prototype

## definitions

General definition : 

> Specify the kinds of objects to create using a prototypical instance, 
> and create new objects by copying this prototype.

Personal definition :  

> Create a mechanism which allows the instantiation of objects using a prototypical instance

## explanation (personal)

I believe my personal definition needs explanation (need to improve it).
Here the goal is simple, using a prototypical instance we need to create a mechanism
to instantiate other instance of the same type.

For example if I have a class ```Robot``` and create an instance like this:
```c++
Robot bot;
```

I want to have a mechanism which using this ```bot``` instance, could create other ```Robot```.

## implementation

To implement this, there are several ways. But I have to say that the usefullness of this
Design Pattern is still unclear at the moment for me.

### v1 : a clone method

Basically the classic way to implement this is to proceed as follows; this is our base class:
```c++
class Robot {
    public:
        Robot() {std::cout << "[robot] robot instantiated" << std::endl;};
        ~Robot() {std::cout <<"[robot] robot destroyed" << std::endl;};
        virtual Robot* Clone() = 0; // <-- the method to implement
};
```

This base class ```Robot``` has a method called ```Clone``` which allows to instantiate another ```Robot```.
For example if I have other type of ```Robot``` like the one below:

```c++
class SurveillanceBot : public Robot {
    public:
        SurveillanceBot(){std::cout << "[surveillancebot] robot instantiated" << std::endl;}
        Robot* Clone() override {
            return new SurveillanceBot();
        }
};
```

Now we need another class which is in charge of instantiating those Bot as we wish. It can be done like this;
```c++
class RobotSpawner {
    public:
        explicit RobotSpawner(Robot* proto): robotPrototype_m(proto){
            std::cout << "[robotspawner] robotspawner instantiated" << std::endl;
        }
        Robot* SpawnRobot(){
            return robotPrototype_m->Clone();
        }
    
    private:
        Robot* robotPrototype_m;
};
```

So in our code what we need to do is to instantiate our prototype first, then our spawner
and finally we can use the spawner to spawn as many copy we want.

```c++
SurveillanceBot srvBot;
RobotSpawner* surveillanceBotSpawner = new RobotSpawner(&srvBot);
...
SurveillanceBot *srvBot_1 = surveillanceBotSpawner->SpawnRobot();
SurveillanceBot *srvBot_2 = surveillanceBotSpawner->SpawnRobot();
SurveillanceBot *srvBot_3 = surveillanceBotSpawner->SpawnRobot();
SurveillanceBot *srvBot_4 = surveillanceBotSpawner->SpawnRobot();
SurveillanceBot *srvBot_5 = surveillanceBotSpawner->SpawnRobot();
...
```

### v2 : a function pointer

This is another way to come to the same result but not as Object Oriented as was the first implementation.
Instead of having a prototype instance as private members, we have a callback to the method used to create 
new instances.

```c++
typedef Robot* (*SpawnCallback)();

class RobotSpawnerV2 {
public:
    explicit RobotSpawnerV2(SpawnCallback spawnCallback): spawnCallback_m(spawnCallback){
        std::cout << "[spawner-v2] spawner created" << std::endl;
    }
    Robot* spawnRobot(){ return spawnCallback_m();}
private:
    SpawnCallback spawnCallback_m;
};
```

When using this, we need of course a callback method:
```c++
SurveillanceBot * spawnSurveillanceBot(){
    return new SurveillanceBot();
}
```

With this method we can instantiate our ```RobotSpawnerV2``` :

```c++
RobotSpawnerV2 * surveillanceRobotSpawnerV2 = new RobotSpawnerV2(spawnSurveillanceBot);
SurveillanceBot* srvBot = surveillanceRobotSpawnerV2->spawnRobot();
```

### v3 : a template class

This is the simplest way in my opinion even though it is not the classic way to implement this 
Design Pattern:

```c++
template<typename T>
class Spawner {
    public:
        explicit Spawner() { std::cout << "[spawner] spawner instantiated" << std::endl; }
        T* SpawnRobot() { return new T(); }
};
```


## conclusion

I understand the practicability of such Design Pattern, however, at this very moment I've rarely seen it
and thus don't really know where I will be using it in real scenarios.

However, I cannot recommend enough reading what Robert Nystrom has to said about it in his wonderful book.
Here is the link for the corresponding chapter : 
[Game Programming Patterns - Prototype](https://gameprogrammingpatterns.com/prototype.html).