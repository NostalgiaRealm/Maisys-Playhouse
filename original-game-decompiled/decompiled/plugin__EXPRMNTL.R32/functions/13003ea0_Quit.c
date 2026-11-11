
/* ==== Quit @ 13003ea0 ==== 
 * signature: undefined __cdecl Quit(int param_1)
 * body: 13003ea0-130040f1
 */

void __cdecl Quit(int param_1)

{
                    /* 0x3ea0  2  Quit */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x14;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    FUN_13003890(param_1,0x1300831c);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_13003c20(param_1,(undefined4 *)s__MComponent_13008030,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_13003c60(param_1,1,0,7,FUN_13004150);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_13003c60(param_1,1,0,8,FUN_13004180);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x22,FUN_130041c0);
      goto LAB_13003f6d;
    }
LAB_13003f8a:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x16,FUN_13004620);
      goto LAB_13003fa7;
    }
LAB_13003fc4:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x1b,FUN_13004290);
      goto LAB_13003fe1;
    }
LAB_13003ffe:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x11,FUN_13004300);
      goto LAB_1300401b;
    }
LAB_13004038:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x12,FUN_13004410);
      goto LAB_13004055;
    }
LAB_13004072:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0xe,FUN_13004580);
      goto LAB_1300408f;
    }
LAB_130040ac:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_130040e6;
    FUN_13003c60(param_1,1,0,0x25,FUN_13004660);
  }
  else {
LAB_13003f6d:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,9,FUN_13004200);
      goto LAB_13003f8a;
    }
LAB_13003fa7:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x1a,FUN_13004210);
      goto LAB_13003fc4;
    }
LAB_13003fe1:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x1d,FUN_130042f0);
      goto LAB_13003ffe;
    }
LAB_1300401b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x13,FUN_13004380);
      goto LAB_13004038;
    }
LAB_13004055:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0xd,FUN_13004520);
      goto LAB_13004072;
    }
LAB_1300408f:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_13003c60(param_1,1,0,0x19,FUN_130045e0);
      goto LAB_130040ac;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_13003c60(param_1,1,0,0x2e,FUN_13004100);
  }
LAB_130040e6:
  FUN_13003c90(param_1);
  return;
}


