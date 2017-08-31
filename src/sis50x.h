/*
 * 86Box	A hypervisor and IBM PC system emulator that specializes in
 *		running old operating systems and software designed for IBM
 *		PC systems and compatibles from 1981 through fairly recent
 *		system designs based on the PCI bus.
 *
 *		Emulation of the SiS 50x PCI chips.
 *
 * Version:	@(#)sis50x.h	1.0.1	2017/08/23
 *
 * Author:	Miran Grca, <mgrca8@gmail.com>
 *		Copyright 2017 Miran Grca.
 */

void sis501_init(void);
void sis503_init(int card);
void sis50x_isa_init(void);
