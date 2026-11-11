
/* ==== PreFetchUrl @ 14009a70 ==== 
 * signature: undefined __cdecl PreFetchUrl(int param_1)
 * body: 14009a70-14009c87
 */

void __cdecl PreFetchUrl(int param_1)

{
                    /* 0x9a70  4  PreFetchUrl */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x58;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    FUN_140088b0(param_1,0x14026564);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_14008e00(param_1,(undefined4 *)s__MComponent_14026038,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,7,FUN_14009c90);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,8,FUN_14009d00);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x22,FUN_14009e10);
      goto LAB_14009b3d;
    }
LAB_14009b5a:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x16,FUN_1400a340);
      goto LAB_14009b77;
    }
LAB_14009b94:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x11,FUN_14009f50);
      goto LAB_14009bb1;
    }
LAB_14009bce:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x12,FUN_1400a060);
      goto LAB_14009beb;
    }
LAB_14009c08:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xe,FUN_1400a150);
      goto LAB_14009c25;
    }
LAB_14009c42:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_14009c7c;
    FUN_14008e40(param_1,1,0,0x25,FUN_1400a190);
  }
  else {
LAB_14009b3d:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,9,FUN_14009f00);
      goto LAB_14009b5a;
    }
LAB_14009b77:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x17,FUN_1400a4e0);
      goto LAB_14009b94;
    }
LAB_14009bb1:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x13,FUN_14009fd0);
      goto LAB_14009bce;
    }
LAB_14009beb:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xd,FUN_1400a110);
      goto LAB_14009c08;
    }
LAB_14009c25:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x19,FUN_1400a660);
      goto LAB_14009c42;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,0x2e,FUN_1400a280);
  }
LAB_14009c7c:
  FUN_14008e70(param_1);
  return;
}


