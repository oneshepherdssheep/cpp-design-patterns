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

