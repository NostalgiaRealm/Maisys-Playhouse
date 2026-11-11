
/* ==== Print @ 1200e3f0 ==== 
 * signature: undefined __cdecl Print(int param_1)
 * body: 1200e3f0-1200e67b
 */

void __cdecl Print(int param_1)

{
                    /* 0xe3f0  12  Print */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x30;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    FUN_12027170(param_1,0x1203758c);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_120276c0(param_1,(undefined4 *)s__MComponent_120370cc,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,7,FUN_1200e840);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,8,FUN_1200e9c0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x22,FUN_1200eb00);
      goto LAB_1200e4bd;
    }
LAB_1200e4da:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x16,FUN_1200f740);
      goto LAB_1200e4f7;
    }
LAB_1200e514:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x25,FUN_1200ec10);
      goto LAB_1200e531;
    }
LAB_1200e54e:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1b,FUN_1200ed30);
      goto LAB_1200e56b;
    }
LAB_1200e588:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x13,FUN_1200f240);
      goto LAB_1200e5a5;
    }
LAB_1200e5c2:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xd,FUN_1200f640);
      goto LAB_1200e5df;
    }
LAB_1200e5fc:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x19,FUN_1200f6c0);
      goto LAB_1200e619;
    }
LAB_1200e636:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_1200e670;
    FUN_12027700(param_1,1,0,0x24,FUN_1200f050);
  }
  else {
LAB_1200e4bd:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,9,FUN_1200eba0);
      goto LAB_1200e4da;
    }
LAB_1200e4f7:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x17,FUN_1200f9d0);
      goto LAB_1200e514;
    }
LAB_1200e531:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1a,FUN_1200ec60);
      goto LAB_1200e54e;
    }
LAB_1200e56b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x11,FUN_1200f100);
      goto LAB_1200e588;
    }
LAB_1200e5a5:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x12,FUN_1200f360);
      goto LAB_1200e5c2;
    }
LAB_1200e5df:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xe,FUN_1200f680);
      goto LAB_1200e5fc;
    }
LAB_1200e619:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1d,FUN_1200ef60);
      goto LAB_1200e636;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,0x2e,FUN_1200e680);
  }
LAB_1200e670:
  FUN_12027730(param_1);
  return;
}


