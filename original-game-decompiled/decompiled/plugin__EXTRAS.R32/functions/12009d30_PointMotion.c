
/* ==== PointMotion @ 12009d30 ==== 
 * signature: undefined __cdecl PointMotion(int param_1)
 * body: 12009d30-12009f5f
 */

void __cdecl PointMotion(int param_1)

{
                    /* 0x9d30  11  PointMotion */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xa4) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0xb6;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_12027170(param_1,0x12037354);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_120276c0(param_1,(undefined4 *)s__MComponent_120370cc,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,7,FUN_1200a090);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,8,FUN_1200a160);
      goto LAB_12009dcf;
    }
LAB_12009ded:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x22,FUN_1200a420);
      goto LAB_12009e0b;
    }
LAB_12009e29:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x11,FUN_1200a750);
      goto LAB_12009e47;
    }
LAB_12009e65:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x12,FUN_1200abb0);
      goto LAB_12009e83;
    }
LAB_12009ea1:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xe,FUN_1200b170);
      goto LAB_12009ebf;
    }
LAB_12009edd:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x17,FUN_1200b4b0);
      goto LAB_12009efb;
    }
LAB_12009f19:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_12009f55;
    FUN_12027700(param_1,1,0,0x2e,FUN_12009f60);
  }
  else {
LAB_12009dcf:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,9,FUN_1200a360);
      goto LAB_12009ded;
    }
LAB_12009e0b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x25,FUN_1200a630);
      goto LAB_12009e29;
    }
LAB_12009e47:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x13,FUN_1200a970);
      goto LAB_12009e65;
    }
LAB_12009e83:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xd,FUN_1200b110);
      goto LAB_12009ea1;
    }
LAB_12009ebf:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x16,FUN_1200b1d0);
      goto LAB_12009edd;
    }
LAB_12009efb:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x19,FUN_1200b8a0);
      goto LAB_12009f19;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,1,0,FUN_1200bb80);
  }
LAB_12009f55:
  FUN_12027730(param_1);
  return;
}


