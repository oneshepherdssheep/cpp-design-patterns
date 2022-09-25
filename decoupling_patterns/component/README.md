# component

## definitions

General definition : 

> Allow a single entity to span multiple domains without coupling the domains to each other.

Definition from the book :

> A single entity spans multiple domains. To keep the domains isolated, the code for each is placed
> in its own component class. The entity is reduced to a simple container of components.

Personal definition :  

> If an entity handles multiple domains, create separated/isolated components so that this
> entity will incorporate them (like a container) to safely use them.

## explanations

There is not much of additional explanations here, the goal is separate the domains
by having dedicated classes and use them in another class as instance members.

## implementation

### introduction

For the implementation, I will implement a very basic fake game engine.
The goal is not to implement a real game engine but to illustrate the
usefulness of the design pattern component.

The game I have chosen is snake.

I might do a full implementation, but it will be in another project.

