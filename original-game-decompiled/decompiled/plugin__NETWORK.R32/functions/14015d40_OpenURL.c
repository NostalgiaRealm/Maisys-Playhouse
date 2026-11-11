
/* ==== OpenURL @ 14015d40 ==== 
 * signature: undefined __cdecl OpenURL(int param_1)
 * body: 14015d40-14015f59
 */

void __cdecl OpenURL(int param_1)

{
                    /* 0x15d40  2  OpenURL */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x48;
    *(undefined2 *)(param_1 + 0xa6) = 2;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    FUN_140088b0(param_1,0x14026ce0);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_14008e00(param_1,(undefined4 *)s__MComponent_14026038,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,7,FUN_14015f60);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,8,FUN_14015fa0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x22,FUN_14016040);
      goto LAB_14015e0f;
    }
LAB_14015e2c:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x16,FUN_14016920);
      goto LAB_14015e49;
    }
LAB_14015e66:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x11,FUN_140161c0);
      goto LAB_14015e83;
    }
LAB_14015ea0:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x12,FUN_14016320);
      goto LAB_14015ebd;
    }
LAB_14015eda:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xe,FUN_14016760);
      goto LAB_14015ef7;
    }
LAB_14015f14:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_14015f4e;
    FUN_14008e40(param_1,1,0,0x25,FUN_140167a0);
  }
  else {
LAB_14015e0f:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,9,FUN_14016140);
      goto LAB_14015e2c;
    }
LAB_14015e49:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x17,FUN_14016a40);
      goto LAB_14015e66;
    }
LAB_14015e83:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x13,FUN_14016270);
      goto LAB_14015ea0;
    }
LAB_14015ebd:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xd,FUN_14016720);
      goto LAB_14015eda;
    }
LAB_14015ef7:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x19,FUN_14016c80);
      goto LAB_14015f14;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,0x2e,FUN_14016860);
  }
LAB_14015f4e:
  FUN_14008e70(param_1);
  return;
}


