#ifndef __MULTIROTOR_GEOMETRY_CTRL_H__
#define __MULTIROTOR_GEOMETRY_CTRL_H__

#include "imu.h"
#include "ahrs.h"
#include "debug_link.h"

void geometry_ctrl_init(void);
void multirotor_geometry_control(imu_t *imu, ahrs_t *ahrs, radio_t *rc, float desired_heading);

void send_geometry_ctrl_debug(debug_msg_t *payload);
void send_uav_dynamics_debug(debug_msg_t *payload);

#endif
