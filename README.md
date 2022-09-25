# Design Patterns

## What is this repository about ?

This repository contains implementation of Design Patterns in C++ as I have learnt them from 
[Robert Nystrom](https://gameprogrammingpatterns.com/).

I stumbled on the topic as I was developing a small video game in 2018 and wanted to apply good practices.
I since liked them a lot and really appreciate the book [Game Programming Patterns by Robert Nystrom](https://gameprogrammingpatterns.com/).

All Design Patterns are grouped by categories as mentioned in the book by 
[Robert Nystrom](https://gameprogrammingpatterns.com/). I've implemented those Design Patterns with specific changes and 
examples that I devised for my understanding. If you want to get the exact examples from the book please check them
(the book is freely available in html format but, I would suggest to buy the book because it is a good book :) )

## Design Patterns Categories

### Design Patterns Revisited

* [Command](design_patterns_revisited/command/README.md) ✅
* [Flyweight](design_patterns_revisited/flyweight/README.md) ✅
* [Observer](design_patterns_revisited/observer/README.md) ✅
* [Prototype](design_patterns_revisited/prototype/README.md) ✅
* [Singleton](design_patterns_revisited/singleton/README.md) ✅
* [State](design_patterns_revisited/state/README.md) ✅

### Sequencing Patterns

* [Double Buffer](sequencing_patterns/double_buffer/README.md) 🚧
* [Game Loop](sequencing_patterns/game_loop/README.md) 🚧
* [Update Method](sequencing_patterns/update_method/README.md) 🚧

### Behavioral Patterns

* [Bytecode](behavioral_patterns/bytecode/README.md) 🚧
* [Subclass Sandbox](behavioral_patterns/subclass_sandbox/README.md) 🚧
* [Type Object](behavioral_patterns/type_object/README.md) 🚧


### Decoupling Patterns

* [Component](decoupling_patterns/component/README.md) ✅
* [Event Queue](decoupling_patterns/event_queue/README.md) ✅
* [Service Locator](decoupling_patterns/service_locator/README.md) 🚧


### Optimization Patterns

* [Data Locality](optimization_patterns/data_locality/README.md) 🚧
* [Dirty Flag](optimization_patterns/dirty_flag/README.md) 🚧
* [Object Pool](optimization_patterns/object_pool/README.md) 🚧
* [Spatial Partition](optimization_patterns/spatial_partition/README.md) 🚧


## How to build it ?

After cloning the repository please proceed as follows:

```shell
cd cpp-design-patterns
mkdir build
cd build
cmake ..
make 
```

