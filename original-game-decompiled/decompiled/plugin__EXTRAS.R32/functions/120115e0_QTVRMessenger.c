
/* ==== QTVRMessenger @ 120115e0 ==== 
 * signature: undefined __cdecl QTVRMessenger(int param_1)
 * body: 120115e0-1201184b
 */

void __cdecl QTVRMessenger(int param_1)

{
                    /* 0x115e0  14  QTVRMessenger */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xa4) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x8c;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_12027170(param_1,0x120376d8);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_120276c0(param_1,(undefined4 *)s__MComponent_120370cc,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,7,FUN_120118c0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,8,FUN_12011950);
      goto LAB_1201167f;
    }
LAB_1201169d:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,9,FUN_12011cd0);
      goto LAB_120116bb;
    }
LAB_120116d9:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x23,FUN_12011850);
      goto LAB_120116f7;
    }
LAB_12011715:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x11,FUN_12011e10);
      goto LAB_12011733;
    }
LAB_12011751:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x12,FUN_12012170);
      goto LAB_1201176f;
    }
LAB_1201178d:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xe,FUN_12012560);
      goto LAB_120117ab;
    }
LAB_120117c9:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x17,FUN_12012ca0);
      goto LAB_120117e7;
    }
LAB_12011805:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_12011841;
    FUN_12027700(param_1,1,0,0x2e,FUN_12011870);
  }
  else {
LAB_1201167f:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x22,FUN_12011ae0);
      goto LAB_1201169d;
    }
LAB_120116bb:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x16,FUN_12012c40);
      goto LAB_120116d9;
    }
LAB_120116f7:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x28,FUN_12011860);
      goto LAB_12011715;
    }
LAB_12011733:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x13,FUN_12011fe0);
      goto LAB_12011751;
    }
LAB_1201176f:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xd,FUN_12012550);
      goto LAB_1201178d;
    }
LAB_120117ab:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x19,FUN_12012570);
      goto LAB_120117c9;
    }
LAB_120117e7:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x25,FUN_12012490);
      goto LAB_12011805;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,1,0,FUN_12012860);
  }
LAB_12011841:
  FUN_12027730(param_1);
  return;
}


