/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the Apache License, Version 2.0  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <pthread.h>

#include "bstrlib.h"

#include "dynamic_memory_check.h"
#include "log.h"
#include "msc.h"
#include "assertions.h"
#include "conversions.h"
#include "common_types.h"
#include "intertask_interface.h"


//------------------------------------------------------------------------------
void
mme_app_handle_path_switch_request (
      __attribute__((unused)) itti_mme_app_path_switch_request_t * const path_switch_request_pP)
{
  OAILOG_FUNC_IN (LOG_MME_APP);

  OAILOG_DEBUG (LOG_MME_APP, "Received MME_APP_PATH_SWITCH_REQUEST from S1AP\n");

  // ignore message
  OAILOG_FUNC_RETURN (LOG_MME_APP);

}

int 
mme_app_handle_modify_bearer_resp_during_ho (
	itti_s11_modify_bearer_response_t * const modify_bearer_response_pP)
{
  OAILOG_FUNC_IN (LOG_MME_APP);

  OAILOG_DEBUG (LOG_MME_APP, "Received MODIFIED BEARER RESPONSE from S11 during a x2 HO procedure\n");

  // ignore message
  OAILOG_FUNC_RETURN (LOG_MME_APP);
}






}
