
/* ==== TrackController @ 12006e70 ==== 
 * signature: undefined __cdecl TrackController(int param_1)
 * body: 12006e70-12007067
 */

void __cdecl TrackController(int param_1)

{
                    /* 0x6e70  16  TrackController */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x32;
    *(undefined2 *)(param_1 + 0xa6) = 2;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    FUN_12027170(param_1,0x12037258);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_120276c0(param_1,(undefined4 *)s__MComponent_120370cc,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,7,FUN_120070c0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,8,FUN_12007120);
      goto LAB_12006f13;
    }
LAB_12006f31:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,9,FUN_12007270);
      goto LAB_12006f4f;
    }
LAB_12006f6d:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x13,FUN_120074a0);
      goto LAB_12006f8b;
    }
LAB_12006fa9:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xd,FUN_12007920);
      goto LAB_12006fc7;
    }
LAB_12006fe5:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x19,FUN_120079a0);
      goto LAB_12007003;
    }
LAB_12007021:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_1200705d;
    FUN_12027700(param_1,1,0,0x25,FUN_12007310);
  }
  else {
LAB_12006f13:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x22,FUN_120071a0);
      goto LAB_12006f31;
    }
LAB_12006f4f:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x11,FUN_12007360);
      goto LAB_12006f6d;
    }
LAB_12006f8b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x12,FUN_120075c0);
      goto LAB_12006fa9;
    }
LAB_12006fc7:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xe,FUN_12007960);
      goto LAB_12006fe5;
    }
LAB_12007003:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x16,FUN_120072d0);
      goto LAB_12007021;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,0x2e,FUN_12007070);
  }
LAB_1200705d:
  FUN_12027730(param_1);
  return;
}


