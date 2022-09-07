# event queue

## definition

General definition : 

> Decouple when a message or event is sent from when it is processed.

Personal definition :

> Personal definition
> 

## explanation (from the book)

Game Programming Patterns - Decoupling Patterns page 237
> A queue stores a series of notification or requests in first-in, first-out order.
Sending a notification enqueues the request and returns. The request processor then 
process items from the queue at a later time. Requests can be handled directly or 
routed to interested parties. This decouples the sender from the receiver both
statically and in time.

## explanation (personal)

Basically the principle is that when an event is received, it needs to be queued
before it is processed because the application/process/thread handling this event
might be doing something else.

So instead of interrupting this process, it is better to queue the events so that
when the indicated process/application needs to handle it, it can do so when it is
ready/capable of doing it.

This principle of event-driven architecture is sometimes seen in UI applications.
Events are queued one after the other and when they need to be processed, they are 
pulled one after the other from the queue.

## implementation

For the implementation, I've created an Audio component (more an Audio Player Component)
which "plays" audio songs requested by other components.

```Audio``` handles the request using a queue and pull event when it is needed.
It also uses a mutex to protect the access to the queue whether it is in writing or reading.

In the example I created a thread which call the update method of the Audio engine every second.
On the other side I have ```EVENT_GENERATORS_THREADS_COUNT``` other threads which randomly 
ask to play a random song.

So in the logs, you can see the list of different actions which occurs whether it is the request
of a new song or when the ```Audio``` component actually ```plays``` the song.
