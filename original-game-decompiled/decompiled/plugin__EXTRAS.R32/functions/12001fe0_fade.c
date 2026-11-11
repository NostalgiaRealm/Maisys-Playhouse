
/* ==== fade @ 12001fe0 ==== 
 * signature: undefined __cdecl fade(int param_1)
 * body: 12001fe0-1200224d
 */

void __cdecl fade(int param_1)

{
                    /* 0x1fe0  17  fade */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa4) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x66;
    *(undefined2 *)(param_1 + 0xa6) = 2;
    FUN_12027170(param_1,0x120370e0);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_120276c0(param_1,(undefined4 *)s__MComponent_120370cc,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,10,FUN_120022a0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,7,FUN_120022e0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x22,FUN_12002360);
      goto LAB_120020ad;
    }
LAB_120020ca:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,9,FUN_12002510);
      goto LAB_120020e7;
    }
LAB_12002104:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1b,FUN_120025f0);
      goto LAB_12002121;
    }
LAB_1200213e:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1a,FUN_12002740);
      goto LAB_1200215b;
    }
LAB_12002178:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x11,FUN_12002930);
      goto LAB_12002195;
    }
LAB_120021b2:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x12,FUN_12002ce0);
      goto LAB_120021cf;
    }
LAB_120021ec:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_12002226;
    FUN_12027700(param_1,1,0,0x25,FUN_120028a0);
  }
  else {
LAB_120020ad:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,8,FUN_12002460);
      goto LAB_120020ca;
    }
LAB_120020e7:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xe,FUN_120025b0);
      goto LAB_12002104;
    }
LAB_12002121:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1d,FUN_12002720);
      goto LAB_1200213e;
    }
LAB_1200215b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x16,FUN_12002860);
      goto LAB_12002178;
    }
LAB_12002195:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x19,FUN_12002a40);
      goto LAB_120021b2;
    }
LAB_120021cf:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x13,FUN_12002f10);
      goto LAB_120021ec;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,0x2e,FUN_12002250);
  }
LAB_12002226:
  FUN_12027730(param_1);
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,1,0,FUN_12003020);
  }
  return;
}


