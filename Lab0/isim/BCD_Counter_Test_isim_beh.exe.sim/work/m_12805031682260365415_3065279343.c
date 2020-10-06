/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Xilinx_Shared/Lab0/BCD_Counter_Test.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {9U, 0U};
static unsigned int ng5[] = {0U, 0U};



static void Initial_52_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);

LAB4:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t7) == 0)
        goto LAB7;

LAB9:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB10:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t7) == 0)
        goto LAB12;

LAB14:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB15:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB12:    *((unsigned int *)t4) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t7) == 0)
        goto LAB17;

LAB19:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB20:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB17:    *((unsigned int *)t4) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t7) == 0)
        goto LAB22;

LAB24:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB25:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB30;

LAB28:    if (*((unsigned int *)t7) == 0)
        goto LAB27;

LAB29:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB30:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB27:    *((unsigned int *)t4) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t7) == 0)
        goto LAB32;

LAB34:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB35:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB32:    *((unsigned int *)t4) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t7) == 0)
        goto LAB37;

LAB39:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB40:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB37:    *((unsigned int *)t4) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB45;

LAB43:    if (*((unsigned int *)t7) == 0)
        goto LAB42;

LAB44:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB45:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB42:    *((unsigned int *)t4) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB50;

LAB48:    if (*((unsigned int *)t7) == 0)
        goto LAB47;

LAB49:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB50:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB47:    *((unsigned int *)t4) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB55;

LAB53:    if (*((unsigned int *)t7) == 0)
        goto LAB52;

LAB54:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB55:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB56;
    goto LAB1;

LAB52:    *((unsigned int *)t4) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB60;

LAB58:    if (*((unsigned int *)t7) == 0)
        goto LAB57;

LAB59:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB60:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB57:    *((unsigned int *)t4) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB65;

LAB63:    if (*((unsigned int *)t7) == 0)
        goto LAB62;

LAB64:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB65:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB66;
    goto LAB1;

LAB62:    *((unsigned int *)t4) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB70;

LAB68:    if (*((unsigned int *)t7) == 0)
        goto LAB67;

LAB69:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB70:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB67:    *((unsigned int *)t4) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(105, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB75;

LAB73:    if (*((unsigned int *)t7) == 0)
        goto LAB72;

LAB74:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB75:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB76;
    goto LAB1;

LAB72:    *((unsigned int *)t4) = 1;
    goto LAB75;

LAB76:    xsi_set_current_line(106, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB80;

LAB78:    if (*((unsigned int *)t7) == 0)
        goto LAB77;

LAB79:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB80:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB77:    *((unsigned int *)t4) = 1;
    goto LAB80;

LAB81:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB85;

LAB83:    if (*((unsigned int *)t7) == 0)
        goto LAB82;

LAB84:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB85:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB86;
    goto LAB1;

LAB82:    *((unsigned int *)t4) = 1;
    goto LAB85;

LAB86:    xsi_set_current_line(108, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB90;

LAB88:    if (*((unsigned int *)t7) == 0)
        goto LAB87;

LAB89:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB90:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB87:    *((unsigned int *)t4) = 1;
    goto LAB90;

LAB91:    xsi_set_current_line(109, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB95;

LAB93:    if (*((unsigned int *)t7) == 0)
        goto LAB92;

LAB94:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB95:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB96;
    goto LAB1;

LAB92:    *((unsigned int *)t4) = 1;
    goto LAB95;

LAB96:    xsi_set_current_line(110, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB100;

LAB98:    if (*((unsigned int *)t7) == 0)
        goto LAB97;

LAB99:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB100:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB101;
    goto LAB1;

LAB97:    *((unsigned int *)t4) = 1;
    goto LAB100;

LAB101:    xsi_set_current_line(111, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB105;

LAB103:    if (*((unsigned int *)t7) == 0)
        goto LAB102;

LAB104:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB105:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB106;
    goto LAB1;

LAB102:    *((unsigned int *)t4) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(119, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB110;

LAB108:    if (*((unsigned int *)t7) == 0)
        goto LAB107;

LAB109:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB110:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB107:    *((unsigned int *)t4) = 1;
    goto LAB110;

LAB111:    xsi_set_current_line(120, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB115;

LAB113:    if (*((unsigned int *)t7) == 0)
        goto LAB112;

LAB114:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB115:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB116;
    goto LAB1;

LAB112:    *((unsigned int *)t4) = 1;
    goto LAB115;

LAB116:    xsi_set_current_line(126, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB120;

LAB118:    if (*((unsigned int *)t7) == 0)
        goto LAB117;

LAB119:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB120:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB121;
    goto LAB1;

LAB117:    *((unsigned int *)t4) = 1;
    goto LAB120;

LAB121:    xsi_set_current_line(127, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB125;

LAB123:    if (*((unsigned int *)t7) == 0)
        goto LAB122;

LAB124:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB125:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB126;
    goto LAB1;

LAB122:    *((unsigned int *)t4) = 1;
    goto LAB125;

LAB126:    xsi_set_current_line(129, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB130;

LAB128:    if (*((unsigned int *)t7) == 0)
        goto LAB127;

LAB129:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB130:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB131;
    goto LAB1;

LAB127:    *((unsigned int *)t4) = 1;
    goto LAB130;

LAB131:    xsi_set_current_line(130, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB135;

LAB133:    if (*((unsigned int *)t7) == 0)
        goto LAB132;

LAB134:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB135:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 1, 0LL);
    goto LAB1;

LAB132:    *((unsigned int *)t4) = 1;
    goto LAB135;

}

static void Always_135_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3888);
    *((int *)t2) = 1;
    t3 = (t0 + 3600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(135, ng0);

LAB5:    xsi_set_current_line(137, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 3376);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(141, ng0);
    t3 = (t0 + 1608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t7) == 0)
        goto LAB7;

LAB9:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB10:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 3376);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB7:    *((unsigned int *)t6) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(142, ng0);
    t3 = (t0 + 1608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t7) == 0)
        goto LAB12;

LAB14:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB15:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 3376);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB12:    *((unsigned int *)t6) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(143, ng0);
    t3 = (t0 + 1608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t7) == 0)
        goto LAB17;

LAB19:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB20:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 3376);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB17:    *((unsigned int *)t6) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(144, ng0);
    t3 = (t0 + 1608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t7) == 0)
        goto LAB22;

LAB24:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB25:    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t6, 0, 0, 1, 0LL);
    goto LAB2;

LAB22:    *((unsigned int *)t6) = 1;
    goto LAB25;

}


extern void work_m_12805031682260365415_3065279343_init()
{
	static char *pe[] = {(void *)Initial_52_0,(void *)Always_135_1};
	xsi_register_didat("work_m_12805031682260365415_3065279343", "isim/BCD_Counter_Test_isim_beh.exe.sim/work/m_12805031682260365415_3065279343.didat");
	xsi_register_executes(pe);
}
