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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Elektronika/FPGA/projekty/xilinx/LFSR/counter.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_2582214024_3212880686_p_0(char *t0)
{
    char t11[16];
    char t19[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t20;

LAB0:    xsi_set_current_line(21, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4872);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(22, ng0);
    t1 = xsi_get_transient_memory(28U);
    memset(t1, 0, 28U);
    t5 = t1;
    memset(t5, (unsigned char)2, 28U);
    t6 = (t0 + 5032);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 28U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t2 = (t0 + 7688U);
    t6 = (t0 + 7760);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 27;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (27 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t4 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t5, t2, t6, t11);
    if (t4 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7688U);
    t5 = (t0 + 7788);
    t7 = (t19 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 6;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t12 = (6 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t13;
    t8 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t11, t2, t1, t5, t19);
    t9 = (t11 + 12U);
    t13 = *((unsigned int *)t9);
    t20 = (1U * t13);
    t3 = (28U != t20);
    if (t3 == 1)
        goto LAB10;

LAB11:    t10 = (t0 + 5032);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t8, 28U);
    xsi_driver_first_trans_fast(t10);

LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(25, ng0);
    t9 = xsi_get_transient_memory(28U);
    memset(t9, 0, 28U);
    t10 = t9;
    memset(t10, (unsigned char)2, 28U);
    t14 = (t0 + 5032);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 28U);
    xsi_driver_first_trans_fast(t14);
    goto LAB8;

LAB10:    xsi_size_not_matching(28U, t20, 0);
    goto LAB11;

}

static void work_a_2582214024_3212880686_p_1(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7688U);
    t3 = (t0 + 7795);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 27;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (27 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = (t0 + 5096);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t15);

LAB2:    t20 = (t0 + 4888);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 5096);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2582214024_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2112U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4904);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(38, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (0 - 7);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (t5 + t8);
    *((unsigned char *)t9) = (unsigned char)3;
    t10 = (t0 + 5160);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB3;

LAB5:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t2 = (t0 + 5160);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t5, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

static void work_a_2582214024_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(44, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (4 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 1512U);
    t9 = *((char **)t8);
    t10 = (3 - 7);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t15 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t7, t14);
    t16 = (t0 + 1512U);
    t17 = *((char **)t16);
    t18 = (2 - 7);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t16 = (t17 + t21);
    t22 = *((unsigned char *)t16);
    t23 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t15, t22);
    t24 = (t0 + 1512U);
    t25 = *((char **)t24);
    t26 = (0 - 7);
    t27 = (t26 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t24 = (t25 + t29);
    t30 = *((unsigned char *)t24);
    t31 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t23, t30);
    t32 = (t0 + 5224);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = t31;
    xsi_driver_first_trans_fast(t32);

LAB2:    t37 = (t0 + 4920);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2582214024_3212880686_p_4(char *t0)
{
    char t9[16];
    char t11[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(45, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t5 = (7 - 7);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t4 + t7);
    t10 = ((IEEE_P_2592010699) + 4024);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 7;
    t13 = (t12 + 4U);
    *((int *)t13) = 1;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t14 = (1 - 7);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t8 = xsi_base_array_concat(t8, t9, t10, (char)99, t3, (char)97, t1, t11, (char)101);
    t15 = (1U + 7U);
    t16 = (8U != t15);
    if (t16 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 5288);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 8U);
    xsi_driver_first_trans_fast(t13);

LAB2:    t21 = (t0 + 4936);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t15, 0);
    goto LAB6;

}

static void work_a_2582214024_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(46, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 5352);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4952);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2582214024_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2582214024_3212880686_p_0,(void *)work_a_2582214024_3212880686_p_1,(void *)work_a_2582214024_3212880686_p_2,(void *)work_a_2582214024_3212880686_p_3,(void *)work_a_2582214024_3212880686_p_4,(void *)work_a_2582214024_3212880686_p_5};
	xsi_register_didat("work_a_2582214024_3212880686", "isim/counter_isim_beh.exe.sim/work/a_2582214024_3212880686.didat");
	xsi_register_executes(pe);
}
