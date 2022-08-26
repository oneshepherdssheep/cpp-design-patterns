# observer

## definitions

General definition from the Ganf of Four: 

> Define a one-to-many dependency between objects so that when
> one object changes state, all its dependents are notified and updated automatically

Personal definition :  

> It is Design Pattern which allows one object to inform automatically all 
> objects interested in a particular change automatically.

## implementation

I've tried a new implementation using Linked-List and Object Pool.
We still have the ```Subject``` and the ```Observer``` however, the ```Subject``` no longer
hold a list of ```Observer``` or pointer to ```Observer``` but rather a list of ```ObserverNode```
and it is those nodes obtain via the ```ObserverPool``` which allows us the create the link between all
```Observer``` added to the ```Subject```.

I will prepare an illustration to explains it better.

In the next commit...

