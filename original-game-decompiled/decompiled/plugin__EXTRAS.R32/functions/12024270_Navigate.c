
/* ==== Navigate @ 12024270 ==== 
 * signature: undefined __cdecl Navigate(int param_1)
 * body: 12024270-12024487
 */

void __cdecl Navigate(int param_1)

{
                    /* 0x24270  8  Navigate */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x7c;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    FUN_12027170(param_1,0x12037c8c);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_120276c0(param_1,(undefined4 *)s__MComponent_120370cc,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,7,FUN_120244e0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,8,FUN_12024660);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x22,FUN_120247b0);
      goto LAB_1202433d;
    }
LAB_1202435a:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x16,FUN_12026df0);
      goto LAB_12024377;
    }
LAB_12024394:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x11,FUN_12024b20);
      goto LAB_120243b1;
    }
LAB_120243ce:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x12,FUN_12024ea0);
      goto LAB_120243eb;
    }
LAB_12024408:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xe,FUN_12025420);
      goto LAB_12024425;
    }
LAB_12024442:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_1202447c;
    FUN_12027700(param_1,1,0,0x25,FUN_12026fd0);
  }
  else {
LAB_1202433d:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,9,FUN_12024970);
      goto LAB_1202435a;
    }
LAB_12024377:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x17,FUN_12026e30);
      goto LAB_12024394;
    }
LAB_120243b1:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x13,FUN_12024ce0);
      goto LAB_120243ce;
    }
LAB_120243eb:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xd,FUN_120253e0);
      goto LAB_12024408;
    }
LAB_12024425:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x19,FUN_12025460);
      goto LAB_12024442;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,0x2e,FUN_12024490);
  }
LAB_1202447c:
  FUN_12027730(param_1);
  return;
}


