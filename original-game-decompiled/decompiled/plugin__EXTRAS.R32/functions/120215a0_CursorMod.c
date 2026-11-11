
/* ==== CursorMod @ 120215a0 ==== 
 * signature: undefined __cdecl CursorMod(int param_1)
 * body: 120215a0-120217f3
 */

void __cdecl CursorMod(int param_1)

{
                    /* 0x215a0  2  CursorMod */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x22;
    *(undefined2 *)(param_1 + 0xa6) = 2;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    FUN_12027170(param_1,0x12037c78);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_120276c0(param_1,(undefined4 *)s__MComponent_120370cc,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,7,FUN_12021850);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,0x22,FUN_12021890);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,8,FUN_120218f0);
      goto LAB_1202166f;
    }
LAB_1202168c:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1a,FUN_12021960);
      goto LAB_120216a9;
    }
LAB_120216c6:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x11,FUN_12021a90);
      goto LAB_120216e3;
    }
LAB_12021700:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x12,FUN_12021bf0);
      goto LAB_1202171d;
    }
LAB_1202173a:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x17,FUN_12021f50);
      goto LAB_12021757;
    }
LAB_12021774:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xd,FUN_12021f60);
      goto LAB_12021791;
    }
LAB_120217ae:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_120217e8;
    FUN_12027700(param_1,1,0,0x25,FUN_12021dc0);
  }
  else {
LAB_1202166f:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,9,FUN_12021950);
      goto LAB_1202168c;
    }
LAB_120216a9:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1b,FUN_12021a00);
      goto LAB_120216c6;
    }
LAB_120216e3:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x13,FUN_12021b40);
      goto LAB_12021700;
    }
LAB_1202171d:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x16,FUN_12021f10);
      goto LAB_1202173a;
    }
LAB_12021757:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x19,FUN_12021e50);
      goto LAB_12021774;
    }
LAB_12021791:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xe,FUN_12021fc0);
      goto LAB_120217ae;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,0x2e,FUN_12021800);
  }
LAB_120217e8:
  FUN_12027730(param_1);
  return;
}


