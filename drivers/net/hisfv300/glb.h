#ifndef __HISILICON_HIETH_GLB_H
#define __HISILICON_HIETH_GLB_H

#define GLB_HOSTMAC_L32	0x1300
#define BITS_HOSTMAC_L32	MK_BITS(0, 32)
#define GLB_HOSTMAC_H16	0x1304
#define BITS_HOSTMAC_H16	MK_BITS(0, 16)

#define GLB_SOFT_RESET	0x1308
#define BITS_ETH_SOFT_RESET	MK_BITS(0, 1)

#define GLB_FWCTRL	0x1310
#define BITS_VLAN_ENABLE	MK_BITS(0, 1)
#define BITS_FW2CPU_ENA_UP	MK_BITS(5, 1)
#define BITS_FWALL2CPU_UP	MK_BITS(7, 1)
#define BITS_FW2CPU_ENA_DOWN	MK_BITS(9, 1)
#define BITS_FWALL2CPU_DOWN	MK_BITS(11, 1)

#define GLB_MACTCTRL	0x1314
#define BITS_BROAD2CPU_UP	MK_BITS(5, 1)
#define BITS_BROAD2CPU_DOWN	MK_BITS(13, 1)
#define BITS_MACT_ENA_DOWN	MK_BITS(15, 1)
#define BITS_MACT_ENA_UP	MK_BITS(7, 1)

#define GLB_MAC0_L32	0x1400
#define GLB_MAC0_H16	0x1404
#define BITS_MAC0_H16	MK_BITS(0, 16)
#define BITS_PKT2CPU_UP	MK_BITS(21, 1)
#define BITS_PKT2CPU_DOWN	MK_BITS(19, 1)

int hieth_glb_preinit_dummy(struct hieth_netdev_local *ld);

#endif
