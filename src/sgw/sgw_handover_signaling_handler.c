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

/*! \file sgw_handover_signaling_handler.c
 *  \author Carole Bonan
 *  \company IRT b<>com
 *  \date 2017
 *  \version 1.0
 */

#define SGW
#define SGW_HANDOVER_SIGNALLING_HANDLERS_C

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <netinet/in.h>

#include "bstrlib.h"

#include "dynamic_memory_check.h"
#include "assertions.h"
#include "conversions.h"
#include "hashtable.h"
#include "obj_hashtable.h"
#include "common_defs.h"
#include "intertask_interface.h"
#include "msc.h"
#include "log.h"
#include "sgw_ie_defs.h"
#include "3gpp_23.401.h"
#include "common_types.h"
#include "mme_config.h"
#include "sgw_defs.h"
#include "sgw_handlers.h"
#include "sgw_context_manager.h"
#include "sgw.h"
#include "pgw_lite_paa.h"
#include "pgw_pco.h"
#include "spgw_config.h"
#include "gtpv1u.h"
#include "pgw_ue_ip_address_alloc.h"
#include "pgw_pcef_emulation.h"
#include "sgw_context_manager.h"
#include "pgw_procedures.h"
#include "async_system.h"
#include "sgw_mobility_handover_signaling_handler.h"

extern sgw_app_t                        sgw_app;
extern spgw_config_t                    spgw_config;
extern struct gtp_tunnel_ops           *gtp_tunnel_ops;
static uint32_t                         g_gtpv1u_teid = 0;

int
sgw_handle_mobility_sgi_endpoint_updated (
  const itti_sgi_update_end_point_response_t * const resp_pP, teid_t enb_teid_S1u_src)
{
  OAILOG_FUNC_IN(LOG_SPGW_APP);
  int                                     rv = RETURNok;

  OAILOG_DEBUG (LOG_SPGW_APP, "X2 HANDOVER NOT HANDLE \n");
  rv = sgw_handle_sgi_endpoint_updated (resp_pP);
  OAILOG_FUNC_RETURN(LOG_SPGW_APP, rv);
}

