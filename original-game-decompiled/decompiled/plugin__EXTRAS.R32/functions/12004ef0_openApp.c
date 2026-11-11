
/* ==== openApp @ 12004ef0 ==== 
 * signature: undefined __cdecl openApp(int param_1)
 * body: 12004ef0-12005197
 */

void __cdecl openApp(int param_1)

{
                    /* 0x4ef0  18  openApp */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 0;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x32;
    *(undefined4 *)(param_1 + 0xae) = 1;
    FUN_12027170(param_1,0x12037180);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_120276c0(param_1,(undefined4 *)s__MComponent_120370cc,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,7,FUN_12005330);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,8,FUN_12005420);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x22,FUN_12005520);
      goto LAB_12004fbc;
    }
LAB_12004fd9:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1a,FUN_12005600);
      goto LAB_12004ff6;
    }
LAB_12005013:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x24,FUN_12005620);
      goto LAB_12005030;
    }
LAB_1200504d:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x11,FUN_12005640);
      goto LAB_1200506a;
    }
LAB_12005087:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x12,FUN_12005820);
      goto LAB_120050a4;
    }
LAB_120050c1:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xe,FUN_12005e30);
      goto LAB_120050de;
    }
LAB_120050fb:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x16,FUN_120059c0);
      goto LAB_12005118;
    }
LAB_12005135:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x25,FUN_12005970);
      goto LAB_12005152;
    }
  }
  else {
LAB_12004fbc:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,9,FUN_120055a0);
      goto LAB_12004fd9;
    }
LAB_12004ff6:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1b,FUN_12005610);
      goto LAB_12005013;
    }
LAB_12005030:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1d,FUN_12005630);
      goto LAB_1200504d;
    }
LAB_1200506a:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x13,FUN_12005750);
      goto LAB_12005087;
    }
LAB_120050a4:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xd,FUN_12005df0);
      goto LAB_120050c1;
    }
LAB_120050de:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x19,FUN_12005e70);
      goto LAB_120050fb;
    }
LAB_12005118:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x17,FUN_12005b30);
      goto LAB_12005135;
    }
LAB_12005152:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_1200518c;
    FUN_12027700(param_1,1,0,0x2e,FUN_120051a0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,0x31,FUN_120052d0);
  }
LAB_1200518c:
  FUN_12027730(param_1);
  return;
}


