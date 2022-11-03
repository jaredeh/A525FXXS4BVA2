/*
 * Copyright (c) 2019, The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _PHYRX_HE_SIG_A_MU_UL_H_
#define _PHYRX_HE_SIG_A_MU_UL_H_
#if !defined(__ASSEMBLER__)
#endif

#include "he_sig_a_mu_ul_info.h"

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0-1	struct he_sig_a_mu_ul_info phyrx_he_sig_a_mu_ul_info_details;
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_PHYRX_HE_SIG_A_MU_UL 2

struct phyrx_he_sig_a_mu_ul {
    struct            he_sig_a_mu_ul_info                       phyrx_he_sig_a_mu_ul_info_details;
};

/*

struct he_sig_a_mu_ul_info phyrx_he_sig_a_mu_ul_info_details
			
			See detailed description of the STRUCT
*/


 /* EXTERNAL REFERENCE : struct he_sig_a_mu_ul_info phyrx_he_sig_a_mu_ul_info_details */ 


/* Description		PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_FORMAT_INDICATION
			
			Indicates whether the transmission is SU PPDU or a
			trigger based UL MU PDDU
			
			<enum 0 HE_SIGA_FORMAT_HE_TRIG>
			
			<enum 1 HE_SIGA_FORMAT_SU_OR_EXT_SU>
			
			<legal all>
*/
#define PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_FORMAT_INDICATION_OFFSET 0x00000000
#define PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_FORMAT_INDICATION_LSB 0
#define PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_FORMAT_INDICATION_MASK 0x00000001

/* Description		PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_BSS_COLOR_ID
			
			BSS color ID 
			
			<legal all>
*/
#define PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_BSS_COLOR_ID_OFFSET 0x00000000
#define PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_BSS_COLOR_ID_LSB 1
#define PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_BSS_COLOR_ID_MASK 0x0000007e

/* Description		PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_SPATIAL_REUSE
			
			Spatial reuse
			
			
			
			<legal all>
*/
#define PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_SPATIAL_REUSE_OFFSET 0x00000000
#define PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_SPATIAL_REUSE_LSB 7
#define PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_SPATIAL_REUSE_MASK 0x007fff80

/* Description		PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_0A
			
			Note: spec indicates this shall be set to 1
			
			<legal 1>
*/
#define PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_0A_OFFSET 0x00000000
#define PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_0A_LSB 23
#define PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_0A_MASK 0x00800000

/* Description		PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_TRANSMIT_BW
			
			Bandwidth of the PPDU.
			
			
			
			<enum 0 HE_SIG_A_MU_UL_BW20> 20 Mhz 
			
			<enum 1 HE_SIG_A_MU_UL_BW40> 40 Mhz 
			
			<enum 2 HE_SIG_A_MU_UL_BW80> 80 Mhz 
			
			<enum 3 HE_SIG_A_MU_UL_BW160> 160 MHz or 80+80 MHz
			
			
			
			On RX side, Field Used by MAC HW
			
			<legal 0-3>
*/
#define PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_TRANSMIT_BW_OFFSET 0x00000000
#define PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_TRANSMIT_BW_LSB 24
#define PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_TRANSMIT_BW_MASK 0x03000000

/* Description		PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_0B
			
			<legal 0>
*/
#define PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_0B_OFFSET 0x00000000
#define PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_0B_LSB 26
#define PHYRX_HE_SIG_A_MU_UL_0_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_0B_MASK 0xfc000000

/* Description		PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_TXOP_DURATION
			
			Indicates the remaining time in the current TXOP <legal
			all>
*/
#define PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_TXOP_DURATION_OFFSET 0x00000004
#define PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_TXOP_DURATION_LSB 0
#define PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_TXOP_DURATION_MASK 0x0000007f

/* Description		PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_1A
			
			Set to value indicated in the trigger frame
			
			<legal 255>
*/
#define PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_1A_OFFSET 0x00000004
#define PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_1A_LSB 7
#define PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_1A_MASK 0x0000ff80

/* Description		PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_CRC
			
			CRC for HE-SIG-A contents.
			
			This CRC may also cover some fields of L-SIG (TBD)
			
			<legal all>
*/
#define PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_CRC_OFFSET 0x00000004
#define PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_CRC_LSB 16
#define PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_CRC_MASK 0x000f0000

/* Description		PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_TAIL
			
			BCC encoding (similar to VHT-SIG-A) with 6 tail bits is
			used
			
			<legal 0>
*/
#define PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_TAIL_OFFSET 0x00000004
#define PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_TAIL_LSB 20
#define PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_TAIL_MASK 0x03f00000

/* Description		PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_1B
			
			<legal 0>
*/
#define PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_1B_OFFSET 0x00000004
#define PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_1B_LSB 26
#define PHYRX_HE_SIG_A_MU_UL_1_PHYRX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_1B_MASK 0xfc000000


#endif // _PHYRX_HE_SIG_A_MU_UL_H_