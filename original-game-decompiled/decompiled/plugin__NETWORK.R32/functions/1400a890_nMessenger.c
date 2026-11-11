
/* ==== nMessenger @ 1400a890 ==== 
 * signature: undefined __cdecl nMessenger(int param_1)
 * body: 1400a890-1400aac3
 */

void __cdecl nMessenger(int param_1)

{
                    /* 0xa890  5  nMessenger */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0xe8;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    FUN_140088b0(param_1,0x140265ac);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_14008e00(param_1,(undefined4 *)s__MComponent_14026038,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,7,FUN_1400ab20);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,8,FUN_1400ac00);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x22,FUN_1400ade0);
      goto LAB_1400a95d;
    }
LAB_1400a97a:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x11,FUN_1400b060);
      goto LAB_1400a997;
    }
LAB_1400a9b4:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x12,FUN_1400b2e0);
      goto LAB_1400a9d1;
    }
LAB_1400a9ee:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x17,FUN_1400b6b0);
      goto LAB_1400aa0b;
    }
LAB_1400aa28:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xe,FUN_1400b670);
      goto LAB_1400aa45;
    }
LAB_1400aa62:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x25,FUN_1400ce20);
      goto LAB_1400aa7f;
    }
  }
  else {
LAB_1400a95d:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,9,FUN_1400af80);
      goto LAB_1400a97a;
    }
LAB_1400a997:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x13,FUN_1400b1b0);
      goto LAB_1400a9b4;
    }
LAB_1400a9d1:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x16,FUN_1400b980);
      goto LAB_1400a9ee;
    }
LAB_1400aa0b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xd,FUN_1400b630);
      goto LAB_1400aa28;
    }
LAB_1400aa45:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x19,FUN_1400c280);
      goto LAB_1400aa62;
    }
LAB_1400aa7f:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_1400aab8;
    FUN_14008e40(param_1,1,0,0x2e,FUN_1400aad0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,1,0,FUN_1400ccb0);
  }
LAB_1400aab8:
  FUN_14008e70(param_1);
  return;
}


