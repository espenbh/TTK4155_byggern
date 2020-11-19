/*
 * bit_macros.h
 *
 */ 


#ifndef BIT_MACROS_33
#define BIT_MACROS_33

#define set_bit( reg, bit ) (reg |= ( 1 << bit ) )
#define clear_bit( reg, bit ) (reg &= ~(1 << bit))
#define test_bit( reg, bit ) (reg & (1 << bit))
#define loop_until_bit_is_set( reg, bit ) while( !test_bit( reg, bit ) )
#define loop_until_bit_is_clear( reg, bit ) while( test_bit( reg, bit ) )

#define toggle_bit(reg, bit) (reg ^= (1 << bit))

#endif 