
/* ==== QTVRNavigator @ 1201f290 ==== 
 * signature: undefined __cdecl QTVRNavigator(int param_1)
 * body: 1201f290-1201f485
 */

void __cdecl QTVRNavigator(int param_1)

{
                    /* 0x1f290  15  QTVRNavigator */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x56;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    FUN_12027170(param_1,0x12037b4c);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_120276c0(param_1,(undefined4 *)s__MComponent_120370cc,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,7,FUN_1201f4e0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,8,FUN_1201f570);
      goto LAB_1201f331;
    }
LAB_1201f34f:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,9,FUN_1201f780);
      goto LAB_1201f36d;
    }
LAB_1201f38b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x11,FUN_1201f7e0);
      goto LAB_1201f3a9;
    }
LAB_1201f3c7:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x12,FUN_1201fba0);
      goto LAB_1201f3e5;
    }
LAB_1201f403:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xe,FUN_1201ff50);
      goto LAB_1201f421;
    }
LAB_1201f43f:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_1201f47b;
    FUN_12027700(param_1,1,0,0x25,FUN_12020600);
  }
  else {
LAB_1201f331:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x22,FUN_1201f650);
      goto LAB_1201f34f;
    }
LAB_1201f36d:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x16,FUN_120205c0);
      goto LAB_1201f38b;
    }
LAB_1201f3a9:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x13,FUN_1201f9e0);
      goto LAB_1201f3c7;
    }
LAB_1201f3e5:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xd,FUN_1201ff10);
      goto LAB_1201f403;
    }
LAB_1201f421:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x19,FUN_1201ff90);
      goto LAB_1201f43f;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,0x2e,FUN_1201f490);
  }
LAB_1201f47b:
  FUN_12027730(param_1);
  return;
}


