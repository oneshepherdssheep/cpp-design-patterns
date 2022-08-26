# flyweight

## definitions

Definition by the Gang of four : 

> Use sharing to support large numbers of fine-grained objects efficiently.

For me it's more like :

> Reuse similar instances of objects that are found multiple times into your code.

## implementation

For the implementation I've developed a similar example of the one provided by 
[Design Patterns](https://en.wikipedia.org/wiki/Software_design_pattern) but extended it a little.

It's still a Map with various types of terrain.
The Map instantiates instances of each terrain :
```c++
public:
    Map():
    roadTerrain_m{},
    landTerrain_m{},
    mountainTerrain_m{},
    waterTerrain_m{},
    enclosedAreaTerrain_m{}{

    };

...

private:
    Terrain * tiles_m[WIDTH][HEIGHT];
    RoadTerrain roadTerrain_m;
    LandTerrain landTerrain_m;
    MountainTerrain mountainTerrain_m;
    WaterTerrain waterTerrain_m;
    EnclosedAreaTerrain enclosedAreaTerrain_m;
};
```

they are reused during the generation of the Map:

```c++
void GenerateWorld(){
    // Land
    for(std::size_t x = 0; x < WIDTH ; x++) {
        for(std::size_t y = 0; y < HEIGHT; y++) {
            tiles_m[x][y] = &landTerrain_m; // <-- reuse
        }
    }
    // Water
    for(std::size_t x = 0; x < WIDTH ; x++) {
        std::size_t diceRoll = gamelib::GetDiceRoll<6>();
        if((diceRoll%2)==0 && (diceRoll < HEIGHT)) {
            tiles_m[x][diceRoll] = &waterTerrain_m; // <-- reuse
        }
    }
    
    // Mountain
    for(std::size_t x = 0; x < WIDTH ; x++) {
        for(std::size_t y = 0; y < HEIGHT; y++) {
            if(y%13==0){
                tiles_m[x][y] = &mountainTerrain_m; // <-- reuse
            }
        }
    }

    // Road
    for(std::size_t x = 0; x < WIDTH ; x++) {
        for(std::size_t y = 0; y < HEIGHT; y++) {
            if((x==(WIDTH/2)) || (y==(HEIGHT/2))){
                tiles_m[x][y] = &roadTerrain_m; // <-- reuse
            }
        }
    }

// EnclosedArea
    for(std::size_t x = 0; x < WIDTH ; x++) {
        for(std::size_t y = 0; y < HEIGHT; y++) {
            if((x==13) && (y==13)){
                tiles_m[x][y] = &enclosedAreaTerrain_m; // <-- reuse
            }
        }
    }
}
```

This saves space and that's pretty awesome!

PS : I'm planning to extend this example to a real [Advance Wars](https://en.wikipedia.org/wiki/Advance_Wars) clone,
stay tuned ;)