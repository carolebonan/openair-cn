/*
 ** Copyright (c) 2015, EURECOM (www.eurecom.fr)
 ** All rights reserved.
 **
 ** Redistribution and use in source and binary forms, with or without
 ** modification, are permitted provided that the following conditions are met:
 **
 ** 1. Redistributions of source code must retain the above copyright notice, this
 **    list of conditions and the following disclaimer.
 ** 2. Redistributions in binary form must reproduce the above copyright notice,
 **    this list of conditions and the following disclaimer in the documentation
 **    and/or other materials provided with the distribution.
 **
 ** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ** ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 ** WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 ** DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 ** ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 ** (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 ** LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ** ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 ** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 ** SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 **
 ** The views and conclusions contained in the software and documentation are those
 ** of the authors and should not be interpreted as representing official policies,
 ** either expressed or implied, of the FreeBSD Project.
 **/

#ifndef FILE_MME_APP_HANDOVER_SIGNALING_HANDLER_SEEN
#define FILE_MME_APP_HANDOVER_SIGNALING_HANDLER_SEEN

int s1ap_handle_mme_path_switch_request_ack     (const itti_s1ap_enb_path_switch_request_ack_t *itti_s1ap_enb_path_switch_request_ack_p);
int s1ap_handle_mme_path_switch_request_failure (const itti_s1ap_enb_path_switch_request_failure_t *itti_s1ap_enb_path_switch_request_failure_p);
int s1ap_mme_encode_s1pathswitchrequestfailure  (s1ap_message * message_p, uint8_t ** buffer, uint32_t * length);
int s1ap_mme_encode_s1pathswitchrequestack      (s1ap_message * message_p, uint8_t ** buffer, uint32_t * length);

#endif
