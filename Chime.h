/*
 * Chime.h
 *
 *  Created on: Nov 9, 2015
 *      Author: benfr_000
 */

#ifndef CHIME_H_
#define CHIME_H_

extern volatile int run, seatbelt, door, none; // globals
//extern enum in_map_t { RUN=(1<<5), SEATBELT=(1<<4), DOOR=(1<<3), NONE=(1<<0) };
//extern enum sound_t { SLOW=1, FAST=3, OFF = 0};
#define RUN 		(1<<5)
#define SEATBELT 	(1<<4)
#define DOOR		(1<<3)
#define NONE		(1<<0)

class Chime {
	//in_map_t in_map;	//RUN/START, SEATBELT, (LH_DOOR || RH_DOOR), NONE
	void get_state(void);
	//sound_t get_sound (void);

} chime;

void update_inputs(void);

#endif /* CHIME_H_ */
