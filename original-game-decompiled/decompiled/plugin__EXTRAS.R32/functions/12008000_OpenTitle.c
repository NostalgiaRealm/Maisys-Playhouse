
/* ==== OpenTitle @ 12008000 ==== 
 * signature: undefined __cdecl OpenTitle(int param_1)
 * body: 12008000-1200828b
 */

void __cdecl OpenTitle(int param_1)

{
                    /* 0x8000  10  OpenTitle */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x24;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    FUN_12027170(param_1,0x120372a4);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_120276c0(param_1,(undefined4 *)s__MComponent_120370cc,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,7,FUN_12008380);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,8,FUN_12008420);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x22,FUN_12008510);
      goto LAB_120080cd;
    }
LAB_120080ea:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1a,FUN_120085d0);
      goto LAB_12008107;
    }
LAB_12008124:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x24,FUN_12008860);
      goto LAB_12008141;
    }
LAB_1200815e:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x11,FUN_120089e0);
      goto LAB_1200817b;
    }
LAB_12008198:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x12,FUN_12008b40);
      goto LAB_120081b5;
    }
LAB_120081d2:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xe,FUN_120091d0);
      goto LAB_120081ef;
    }
LAB_1200820c:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x16,FUN_12008df0);
      goto LAB_12008229;
    }
LAB_12008246:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_12008280;
    FUN_12027700(param_1,1,0,0x25,FUN_12008da0);
  }
  else {
LAB_120080cd:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,9,FUN_12008570);
      goto LAB_120080ea;
    }
LAB_12008107:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1b,FUN_120086c0);
      goto LAB_12008124;
    }
LAB_12008141:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1d,FUN_120089c0);
      goto LAB_1200815e;
    }
LAB_1200817b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x13,FUN_12008a90);
      goto LAB_12008198;
    }
LAB_120081b5:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xd,FUN_12009190);
      goto LAB_120081d2;
    }
LAB_120081ef:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x19,FUN_12009210);
      goto LAB_1200820c;
    }
LAB_12008229:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x17,FUN_12008f20);
      goto LAB_12008246;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,0x2e,FUN_12008290);
  }
LAB_12008280:
  FUN_12027730(param_1);
  return;
}


