/*
 * This file is part of INAV Project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Alternatively, the contents of this file may be used under the terms
 * of the GNU General Public License Version 3, as described below:
 *
 * This file is free software: you may copy, redistribute and/or modify
 * it under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * This file is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://www.gnu.org/licenses/.
 */

#include <stdbool.h>
#include <stdint.h>
#include "platform.h"
#include "io/serial.h"
#include "io/gps.h"
#include "io/ledstrip.h"
#include "io/rangefinder.h"
#include "io/serial_4way.h"
#include "sensors/compass.h"
#include "fc/config.h"
#include "drivers/pwm_mapping.h"
#include "drivers/pwm_output.h"
#include "blackbox/blackbox.h"
#include "fc/fc_msp_box.h"
#include "fc/controlrate_profile.h"
#include "fc/rc_controls.h"
#include "fc/rc_modes.h"
#include "rx/rx.h"
#include "sensors/sensors.h"
#include "sensors/gyro.h"
#include "sensors/acceleration.h"
#include "sensors/barometer.h"
#include "sensors/boardalignment.h"
#include "flight/pid.h"
#include "flight/mixer.h"
#include "flight/servos.h"
#include "flight/imu.h"
#include "flight/failsafe.h"
#include "drivers/sound_beeper.h"
#include "navigation/navigation.h"
#include "telemetry/telemetry.h"
#include "light_ws2811strip.H"


void targetConfiguration(void)
{
    serialConfigMutable()->portConfigs[4].functionMask = FUNCTION_MSP;
    serialConfigMutable()->portConfigs[4].msp_baudrateIndex = BAUD_57600;
    serialConfigMutable()->portConfigs[2].functionMask = FUNCTION_MSP_OSD;
    serialConfigMutable()->portConfigs[1].functionMask = FUNCTION_GPS;
    serialConfigMutable()->portConfigs[5].functionMask = FUNCTION_ESCSERIAL;
    beeperConfigMutable()->pwmMode = true;
}
