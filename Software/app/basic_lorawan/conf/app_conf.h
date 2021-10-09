/** Copyright © 2021 The Things Industries B.V.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

/**
 * @file app_conf.h
 * @brief Common configuration file for GNSE applications
 *
 * @copyright Copyright (c) 2021 The Things Industries B.V.
 *
 */

#ifndef APP_CONF_H
#define APP_CONF_H

/**
 * if ON (=1) it enables the Tracer and Logging functionality
 * if OFF (=0) the Tracer is OFF (lower current consumption)
 */
#define GNSE_ADVANCED_TRACER_ENABLE 0

/**
 * if ON (=1) it enables the debugger use in low power mode
 * if OFF (=0) the debugger is OFF (lower current consumption)
 */
#define DEBUGGER_ON       0

/* LoRaWAN v1.0.2 software based OTAA activation information */
#define APPEUI                 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
#define DEVEUI                 0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x04, 0x66, 0x41
#define APPKEY                 0x89, 0xE0, 0x29, 0x09, 0xD7, 0x17, 0x89, 0xA8, 0x31, 0xBC, 0x37, 0x90, 0x10, 0x16, 0x3E, 0x17

/**
  * sequencer definitions
  */

/**
  * This is the list of priority required by the application
  * Each Id shall be in the range 0..31
  */
typedef enum
{
  CFG_SEQ_Prio_0,
  CFG_SEQ_Prio_NBR,
} CFG_SEQ_Prio_Id_t;

/**
  * This is the list of task id required by the application
  * Each Id shall be in the range 0..31
  */
typedef enum
{
  CFG_SEQ_Task_LmHandlerProcess,
  CFG_SEQ_Task_LoRaSendOnTxTimerOrButtonEvent,
  CFG_SEQ_Task_NBR
} CFG_SEQ_Task_Id_t;

#endif /* APP_CONF_H */
