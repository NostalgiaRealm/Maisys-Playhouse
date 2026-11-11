
/* ==== PostUrlText @ 14016f10 ==== 
 * signature: undefined __cdecl PostUrlText(int param_1)
 * body: 14016f10-14017141
 */

void __cdecl PostUrlText(int param_1)

{
                    /* 0x16f10  3  PostUrlText */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xa4) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0xa0;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_140088b0(param_1,0x14026d30);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_14008e00(param_1,(undefined4 *)s__MComponent_14026038,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,7,FUN_14017150);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,8,FUN_140171d0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x22,FUN_140172c0);
      goto LAB_14016fdb;
    }
LAB_14016ff8:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x16,FUN_14017880);
      goto LAB_14017015;
    }
LAB_14017032:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x11,FUN_14017480);
      goto LAB_1401704f;
    }
LAB_1401706c:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x12,FUN_140175e0);
      goto LAB_14017089;
    }
LAB_140170a6:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xe,FUN_140176f0);
      goto LAB_140170c3;
    }
LAB_140170e0:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x25,FUN_14017730);
      goto LAB_140170fd;
    }
  }
  else {
LAB_14016fdb:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,9,FUN_140173c0);
      goto LAB_14016ff8;
    }
LAB_14017015:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x17,FUN_14017a60);
      goto LAB_14017032;
    }
LAB_1401704f:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x13,FUN_14017530);
      goto LAB_1401706c;
    }
LAB_14017089:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xd,FUN_140176b0);
      goto LAB_140170a6;
    }
LAB_140170c3:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x19,FUN_14017d40);
      goto LAB_140170e0;
    }
LAB_140170fd:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_14017136;
    FUN_14008e40(param_1,1,0,0x2e,FUN_140177c0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,1,0,FUN_14018280);
  }
LAB_14017136:
  FUN_14008e70(param_1);
  return;
}


