#ifndef __OPTITRACK_H__
#define __OPTITRACK_H__

#include <stdint.h>
#include <stdbool.h>

typedef struct {
	uint8_t id;

	/* position [cm] */
	float pos_x;
	float pos_y;
	float pos_z;

	/* velocity (numerical onboard calcuation) */
	float vel_raw_x;
	float vel_raw_y;
	float vel_raw_z;
	float vel_lpf_x;
	float vel_lpf_y;
	float vel_lpf_z;

	/* orientation (quaternion) */
	float q[4];

	float time_now;
	float time_last;
	float recv_freq;
} optitrack_t ;

int optitrack_serial_decoder(uint8_t *buf);
void optitrack_handler(uint8_t c);
void optitrack_init(int id);
bool optitrack_available(void);

#endif
