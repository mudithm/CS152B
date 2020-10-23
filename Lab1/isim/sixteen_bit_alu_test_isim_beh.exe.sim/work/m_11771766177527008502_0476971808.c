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
static const char *ng0 = "/home/ise/Xilinx_Shared/Lab1/sixteen_bit_alu_test.v";
static int ng1[] = {30, 0};
static int ng2[] = {12, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static int ng6[] = {32767, 0};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {255U, 0U};
static unsigned int ng9[] = {65280U, 0U};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {3U, 0U};
static unsigned int ng12[] = {4U, 0U};
static int ng13[] = {32766, 0};
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {6U, 0U};
static unsigned int ng16[] = {65535U, 0U};
static int ng17[] = {8, 0};
static unsigned int ng18[] = {12U, 0U};
static unsigned int ng19[] = {14U, 0U};
static unsigned int ng20[] = {8U, 0U};
static unsigned int ng21[] = {10U, 0U};
static int ng22[] = {100, 0};
static int ng23[] = {3, 0};
static unsigned int ng24[] = {9U, 0U};
static int ng25[] = {0, 0};
static int ng26[] = {10, 0};
static int ng27[] = {27, 0};



static void Initial_47_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);

LAB4:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t2, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t2, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t2, 32);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t2, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t2, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t2, 32);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(112, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(124, ng0);
    t3 = ((char*)((ng13)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t3, 32);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(130, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(135, ng0);
    t3 = ((char*)((ng13)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t3, 32);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(141, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(146, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(153, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(158, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(164, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(169, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(175, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(180, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(186, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(191, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(198, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(203, ng0);
    t3 = ((char*)((ng25)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(209, ng0);
    t3 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t3, 32);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB32:    xsi_set_current_line(214, ng0);
    t3 = ((char*)((ng27)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(216, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    xsi_set_current_line(221, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_11771766177527008502_0476971808_init()
{
	static char *pe[] = {(void *)Initial_47_0};
	xsi_register_didat("work_m_11771766177527008502_0476971808", "isim/sixteen_bit_alu_test_isim_beh.exe.sim/work/m_11771766177527008502_0476971808.didat");
	xsi_register_executes(pe);
}
