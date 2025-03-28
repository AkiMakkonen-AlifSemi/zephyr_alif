/*
 * Copyright (C) 2025 Alif Semiconductor.
 * SPDX-License-Identifier: Apache-2.0
 */
#if DT_NODE_HAS_STATUS(DT_NODELABEL(ospi1), okay)
SECTION_PROLOGUE(CONFIG_OSPI1_XIP_REGION, 0xC0000000, ALIGN(8))
{
	KEEP(*(.alif_ospi1))
	KEEP(*(".alif_ospi1.*"))
} GROUP_LINK_IN(OSPI1)
#endif /* DT_NODE_HAS_STATUS(DT_NODELABEL(ospi1), okay) */
