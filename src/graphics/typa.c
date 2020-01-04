struct air_speed
{
 uint16_t speed; /* Knoten */
} * x;
struct gnd_speed
{
 uint16_t speed; /* km/h */
 /* Nicht konform - Geschwindigkeit in unterschiedlichen Einheiten */
} * y;
x->speed = y->speed;