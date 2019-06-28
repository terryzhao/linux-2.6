/*
 * arch/arm/mach-kirkwood/include/mach/bridge-regs.h
 *
 * Mbus-L to Mbus Bridge Registers
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __ASM_ARCH_BRIDGE_REGS_H
#define __ASM_ARCH_BRIDGE_REGS_H

#include <mach/kirkwood.h>

#define CPU_CONTROL		(BRIDGE_VIRT_BASE | 0x0104)
#define CPU_RESET		0x00000002

#define RSTOUTn_MASK		(BRIDGE_VIRT_BASE | 0x0108)
#define SOFT_RESET_OUT_EN	0x00000004

#define SYSTEM_SOFT_RESET	(BRIDGE_VIRT_BASE | 0x010c)
#define SOFT_RESET		0x00000001

#define BRIDGE_CAUSE		(BRIDGE_VIRT_BASE | 0x0110)
#define BRIDGE_MASK		(BRIDGE_VIRT_BASE | 0x0114)
#define BRIDGE_INT_TIMER0	0x0002
#define BRIDGE_INT_TIMER1	0x0004
#define BRIDGE_INT_TIMER1_CLR	(~0x0004)

#define IRQ_VIRT_BASE		(BRIDGE_VIRT_BASE | 0x0200)
#define IRQ_CAUSE_LOW_OFF	0x0000
#define IRQ_MASK_LOW_OFF	0x0004
#define IRQ_CAUSE_HIGH_OFF	0x0010
#define IRQ_MASK_HIGH_OFF	0x0014

#define TIMER_VIRT_BASE		(BRIDGE_VIRT_BASE | 0x0300)

#define L2_CONFIG_REG		(BRIDGE_VIRT_BASE | 0x0128)
#define L2_WRITETHROUGH		0x00000010

#endif
