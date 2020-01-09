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
static const char *ng0 = "/home/jhonathann/Escritorio/Digital 2/Proyecto digital 2/work02-simulation-grupo_1/hw/src/cam_read.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {7, 0};
static int ng4[] = {6, 0};
static int ng5[] = {5, 0};
static int ng6[] = {4, 0};
static int ng7[] = {3, 0};
static int ng8[] = {2, 0};



static void Initial_37_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng2)));
    memset(t3, 0, 8);
    xsi_vlog_signed_unary_minus(t3, 32, t1, 32);
    t2 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 15, 0LL);

LAB1:    return;
}

static void Always_42_1(char *t0)
{
    char t4[8];
    char t30[8];
    char t54[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    int t70;

LAB0:    t1 = (t0 + 3864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4184);
    *((int *)t2) = 1;
    t3 = (t0 + 3896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t5 = (t0 + 1504U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(65, ng0);

LAB51:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 15, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(44, ng0);
    t19 = (t0 + 1664U);
    t20 = *((char **)t19);
    t19 = (t20 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(62, ng0);

LAB50:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB16:    goto LAB12;

LAB14:    xsi_set_current_line(44, ng0);

LAB17:    xsi_set_current_line(45, ng0);
    t26 = (t0 + 2704);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng1)));
    memset(t30, 0, 8);
    t31 = (t28 + 4);
    t32 = (t29 + 4);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB21;

LAB18:    if (t42 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t30) = 1;

LAB21:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB22;

LAB23:
LAB24:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB41;

LAB38:    if (t18 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t4) = 1;

LAB41:    t20 = (t4 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t33 = (t25 & t24);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB42;

LAB43:
LAB44:    goto LAB16;

LAB20:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(45, ng0);

LAB25:    xsi_set_current_line(46, ng0);
    t52 = (t0 + 1824U);
    t53 = *((char **)t52);
    memset(t54, 0, 8);
    t52 = (t54 + 4);
    t55 = (t53 + 4);
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 7);
    t58 = (t57 & 1);
    *((unsigned int *)t54) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 7);
    t61 = (t60 & 1);
    *((unsigned int *)t52) = t61;
    t62 = (t0 + 2384);
    t64 = (t0 + 2384);
    t65 = (t64 + 72U);
    t66 = *((char **)t65);
    t67 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t63, t66, 2, t67, 32, 1);
    t68 = (t63 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (!(t69));
    if (t70 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 6);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 6);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 2384);
    t12 = (t0 + 2384);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t30, t19, 2, t20, 32, 1);
    t26 = (t30 + 4);
    t15 = *((unsigned int *)t26);
    t70 = (!(t15));
    if (t70 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 5);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 5);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 2384);
    t12 = (t0 + 2384);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t30, t19, 2, t20, 32, 1);
    t26 = (t30 + 4);
    t15 = *((unsigned int *)t26);
    t70 = (!(t15));
    if (t70 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 2);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 2);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 2384);
    t12 = (t0 + 2384);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t30, t19, 2, t20, 32, 1);
    t26 = (t30 + 4);
    t15 = *((unsigned int *)t26);
    t70 = (!(t15));
    if (t70 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 1);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 2384);
    t12 = (t0 + 2384);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t30, t19, 2, t20, 32, 1);
    t26 = (t30 + 4);
    t15 = *((unsigned int *)t26);
    t70 = (!(t15));
    if (t70 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 2384);
    t12 = (t0 + 2384);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t30, t19, 2, t20, 32, 1);
    t26 = (t30 + 4);
    t15 = *((unsigned int *)t26);
    t70 = (!(t15));
    if (t70 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB24;

LAB26:    xsi_vlogvar_wait_assign_value(t62, t54, 0, *((unsigned int *)t63), 1, 0LL);
    goto LAB27;

LAB28:    xsi_vlogvar_wait_assign_value(t6, t4, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB29;

LAB30:    xsi_vlogvar_wait_assign_value(t6, t4, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB31;

LAB32:    xsi_vlogvar_wait_assign_value(t6, t4, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB33;

LAB34:    xsi_vlogvar_wait_assign_value(t6, t4, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB35;

LAB36:    xsi_vlogvar_wait_assign_value(t6, t4, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB37;

LAB40:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(55, ng0);

LAB45:    xsi_set_current_line(56, ng0);
    t26 = (t0 + 2384);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t30, 0, 8);
    t29 = (t30 + 4);
    t31 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    t36 = (t35 >> 4);
    t37 = (t36 & 1);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t31);
    t39 = (t38 >> 4);
    t40 = (t39 & 1);
    *((unsigned int *)t29) = t40;
    t32 = (t0 + 2384);
    t45 = (t0 + 2384);
    t46 = (t45 + 72U);
    t52 = *((char **)t46);
    t53 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t54, t52, 2, t53, 32, 1);
    t55 = (t54 + 4);
    t41 = *((unsigned int *)t55);
    t70 = (!(t41));
    if (t70 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 3);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 2384);
    t19 = (t0 + 2384);
    t20 = (t19 + 72U);
    t26 = *((char **)t20);
    t27 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t30, t26, 2, t27, 32, 1);
    t28 = (t30 + 4);
    t15 = *((unsigned int *)t28);
    t70 = (!(t15));
    if (t70 == 1)
        goto LAB48;

LAB49:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 15, t6, 32);
    t12 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 15, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB44;

LAB46:    xsi_vlogvar_wait_assign_value(t32, t30, 0, *((unsigned int *)t54), 1, 0LL);
    goto LAB47;

LAB48:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB49;

}


extern void work_m_16205683196754781988_3927878221_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Always_42_1};
	xsi_register_didat("work_m_16205683196754781988_3927878221", "isim/test_cam_TB_isim_beh.exe.sim/work/m_16205683196754781988_3927878221.didat");
	xsi_register_executes(pe);
}
