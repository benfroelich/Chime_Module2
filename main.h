/*
 * main.h
 *
 *  Created on: Dec 13, 2015
 *      Author: benfr_000
 */

#ifndef MAIN_H_
#define MAIN_H_

#define RUN 		(1<<5)
#define SEATBELT 	(1<<4)
#define DOOR		(1<<3)
#define NONE		(1<<0)

#define PATTERNSIZE 16	// 16 bit length pattern used for audio pattern generation

extern volatile int run, buckled, door_or_keys, none; // globals


#endif /* MAIN_H_ */
