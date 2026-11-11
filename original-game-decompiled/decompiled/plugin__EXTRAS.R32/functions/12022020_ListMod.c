
/* ==== ListMod @ 12022020 ==== 
 * signature: undefined __cdecl ListMod(int param_1)
 * body: 12022020-1202221c
 */

void __cdecl ListMod(int param_1)

{
                    /* 0x22020  4  ListMod */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 5;
    *(undefined4 *)(param_1 + 0xae) = 5;
    *(undefined4 *)(param_1 + 0xaa) = 0x18;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_12027170(param_1,0x12037c84);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_120276c0(param_1,(undefined4 *)s__MComponent_120370cc,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,7,FUN_120224b0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,0x22,FUN_120224f0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,8,FUN_12022590);
      goto LAB_120220ef;
    }
LAB_1202210c:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1a,FUN_12022610);
      goto LAB_12022129;
    }
LAB_12022146:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x11,FUN_12022720);
      goto LAB_12022163;
    }
LAB_12022180:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x12,FUN_12022950);
      goto LAB_1202219d;
    }
LAB_120221ba:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x17,FUN_12023030);
      goto LAB_120221d7;
    }
  }
  else {
LAB_120220ef:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,9,FUN_120225f0);
      goto LAB_1202210c;
    }
LAB_12022129:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x1b,FUN_12022690);
      goto LAB_12022146;
    }
LAB_12022163:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x13,FUN_12022810);
      goto LAB_12022180;
    }
LAB_1202219d:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x16,FUN_12023010);
      goto LAB_120221ba;
    }
LAB_120221d7:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_12022211;
    FUN_12027700(param_1,1,0,0xe,FUN_12022fe0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,0x2e,FUN_12022220);
  }
LAB_12022211:
  FUN_12027730(param_1);
  return;
}


