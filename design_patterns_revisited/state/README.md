# state

## definitions

General definition : 

> Allow an object to alter its behavior when its internal state changes.
> The object will appear to change its class.

Personal definition :  

> Personal definition

## explanations (personal)

The goal of this pattern is to allow a change of behavior in a particular object
according to some inputs by using states which define the behavior.

In other words, each state corresponds to a particular behavior.
The object switch from states to state to alter its behavior according to some inputs.

Those states also allow to define the transitions.

## implementation

For my implementation, I want to implement a ```BattleTurn```.
A ```BattleTurn``` allow to control the flow of action of a player in a Turn Based Game.

This ```BattleTurn``` will have the following states:
- UNIT SELECTION
- UNIT MOVEMENENT
- UNIT ACTION ORDER

