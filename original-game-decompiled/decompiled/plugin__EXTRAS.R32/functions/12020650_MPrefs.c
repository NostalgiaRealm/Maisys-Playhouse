
/* ==== MPrefs @ 12020650 ==== 
 * signature: undefined __cdecl MPrefs(int param_1)
 * body: 12020650-120207cd
 */

void __cdecl MPrefs(int param_1)

{
                    /* 0x20650  5  MPrefs */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x46;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    FUN_12027170(param_1,0x12037c00);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_120276c0(param_1,(undefined4 *)s__MComponent_120370cc,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,7,FUN_120207d0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x22,FUN_12020860);
      goto LAB_120206f1;
    }
LAB_1202070f:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,9,FUN_120209c0);
      goto LAB_1202072d;
    }
LAB_1202074b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x13,FUN_12020c00);
      goto LAB_12020769;
    }
LAB_12020787:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_120207c3;
    FUN_12027700(param_1,1,0,0x2e,FUN_12021170);
  }
  else {
LAB_120206f1:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,8,FUN_120208e0);
      goto LAB_1202070f;
    }
LAB_1202072d:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x11,FUN_12020a60);
      goto LAB_1202074b;
    }
LAB_12020769:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x12,FUN_12020d70);
      goto LAB_12020787;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,0x16,FUN_120212a0);
  }
LAB_120207c3:
  FUN_12027730(param_1);
  return;
}


