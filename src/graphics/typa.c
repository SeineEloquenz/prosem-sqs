typedef struct {
    uint16_t speed; /* Knoten */
} air_speed;
typedef struct {
    uint16_t speed; /* km/h */
} gnd_speed;
/* Variablenname wiederverwendet - nicht konform */
air_speed x = { 1 };
gnd_speed y = { 1 };
x.speed = y.speed;