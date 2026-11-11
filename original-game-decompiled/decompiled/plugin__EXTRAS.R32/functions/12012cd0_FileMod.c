
/* ==== FileMod @ 12012cd0 ==== 
 * signature: undefined __cdecl FileMod(int param_1)
 * body: 12012cd0-12012ee5
 */

void __cdecl FileMod(int param_1)

{
                    /* 0x12cd0  3  FileMod */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x74;
    *(undefined2 *)(param_1 + 0xa6) = 2;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    FUN_12027170(param_1,0x12037724);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_120276c0(param_1,(undefined4 *)s__MComponent_120370cc,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,7,FUN_12013290);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,8,FUN_12013340);
      goto LAB_12012d73;
    }
LAB_12012d91:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,9,FUN_120135e0);
      goto LAB_12012daf;
    }
LAB_12012dcd:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xe,FUN_12014500);
      goto LAB_12012deb;
    }
LAB_12012e09:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x13,FUN_12013890);
      goto LAB_12012e27;
    }
LAB_12012e45:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x19,FUN_12014560);
      goto LAB_12012e63;
    }
LAB_12012e81:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x17,FUN_12014290);
      goto LAB_12012e9f;
    }
  }
  else {
LAB_12012d73:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x22,FUN_12013460);
      goto LAB_12012d91;
    }
LAB_12012daf:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0xd,FUN_120144a0);
      goto LAB_12012dcd;
    }
LAB_12012deb:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x11,FUN_12013720);
      goto LAB_12012e09;
    }
LAB_12012e27:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x12,FUN_120139e0);
      goto LAB_12012e45;
    }
LAB_12012e63:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_12027700(param_1,1,0,0x16,FUN_12013ec0);
      goto LAB_12012e81;
    }
LAB_12012e9f:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_12012edb;
    FUN_12027700(param_1,1,0,0x25,FUN_12013e30);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_12027700(param_1,1,0,0x2e,FUN_12012ef0);
  }
LAB_12012edb:
  FUN_12027730(param_1);
  return;
}


