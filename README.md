<a id="top"></a>
![linux](https://github.com/oneshepherdssheep/cpp-design-patterns/actions/workflows/linux.yml/badge.svg)
![codeql](https://github.com/oneshepherdssheep/cpp-design-patterns/actions/workflows/codeql-analysis.yml/badge.svg)
![pvs-studio](https://github.com/oneshepherdssheep/cpp-design-patterns/actions/workflows/pvs-studio-build-analyze.yml/badge.svg)
[![CII Best Practices](https://bestpractices.coreinfrastructure.org/projects/6517/badge)](https://bestpractices.coreinfrastructure.org/projects/6517)
# Design Patterns

## What is this repository about ?

This repository contains implementation of Design Patterns in C++ as I have learnt them from 
[Robert Nystrom](https://gameprogrammingpatterns.com/).

I have learned about [Design Patterns](https://en.wikipedia.org/wiki/Software_design_pattern) in 2018.
At school no one taught us about Software Architecture and Design Patterns in particular :( .

I stumbled on the topic as I was developing a small video game and wanted to apply good practices.
I since liked them a lot and really appreciate the book [Game Programming Patterns by Robert Nystrom](https://gameprogrammingpatterns.com/).

All Design Patterns are grouped by categories as mentioned in the book by 
[Robert Nystrom](https://gameprogrammingpatterns.com/). I've implemented those Design Patterns with specific changes and 
examples that I devised for my understanding. If you want to get the exact examples from the book please check them
(the book is freely available in html format but, I would suggest to buy the book because it is a good book :) )

## Design Patterns Categories
- [Design Patterns Revisited](#design-patterns-revisited)
- [Sequencing Patterns](#sequencing-patterns)
- [Behavioral Patterns](#behavioral-patterns)
- [Decoupling Patterns](#decoupling-patterns)
- [Optimization Patterns](#optimization-patterns)


### Design Patterns Revisited

| Design Pattern                                             | Status |
|------------------------------------------------------------|--------|
| [Command](design_patterns_revisited/command/README.md)     | ✔      | 
| [Flyweight](design_patterns_revisited/flyweight/README.md) | ✔      | 
| [Observer](design_patterns_revisited/observer/README.md)   | ✔      | 
| [Prototype](design_patterns_revisited/prototype/README.md) | ✔      | 
| [Singleton](design_patterns_revisited/singleton/README.md) | ✔      | 
| [State](design_patterns_revisited/state/README.md)         | ✔      | 

### Sequencing Patterns

| Design Pattern                                               | Status |
|--------------------------------------------------------------|--------|
| [Double Buffer](sequencing_patterns/double_buffer/README.md) | 🚧     | 
| [Game Loop](sequencing_patterns/game_loop/README.md)         | 🚧     | 
| [Update Method](sequencing_patterns/update_method/README.md) | 🚧     | 

### Behavioral Patterns

| Design Pattern                                                     | Status |
|--------------------------------------------------------------------|--------|
| [Bytecode](behavioral_patterns/bytecode/README.md)                 | 🚧     | 
| [Subclass Sandbox](behavioral_patterns/subclass_sandbox/README.md) | 🚧     | 
| [Type Object](behavioral_patterns/type_object/README.md)           | 🚧     | 


### Decoupling Patterns

| Design Pattern                                                      | Status |
|---------------------------------------------------------------------|--------|
| [Component](decoupling_patterns/component/README.md)                | 🚧     |
| [Event Queue](decoupling_patterns/event_queue/README.md)            | ✔      |
| [Service Locator](decoupling_patterns/service_locator/README.md)    | 🚧     | 


### Optimization Patterns

| Design Pattern                                                         | Status |
|------------------------------------------------------------------------|--------|
| [Data Locality](optimization_patterns/data_locality/README.md)         | 🚧     |
| [Dirty Flag](optimization_patterns/dirty_flag/README.md)               | 🚧     |
| [Object Pool](optimization_patterns/object_pool/README.md)             | 🚧     |
| [Spatial Partition](optimization_patterns/spatial_partition/README.md) | 🚧     |


## How to build it ?

After cloning the repository please proceed as follows:

```shell
cd cpp-design-patterns
cmake -S . -B build
cmake --build build
```

