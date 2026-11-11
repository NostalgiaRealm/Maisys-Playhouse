
/* ==== FetchUrlText @ 1400d9a0 ==== 
 * signature: undefined __cdecl FetchUrlText(int param_1)
 * body: 1400d9a0-1400dbd1
 */

void __cdecl FetchUrlText(int param_1)

{
                    /* 0xd9a0  1  FetchUrlText */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xa4) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0xaa;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_140088b0(param_1,0x14026730);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_14008e00(param_1,(undefined4 *)s__MComponent_14026038,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,7,FUN_1400dbe0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,8,FUN_1400dc80);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x22,FUN_1400ddb0);
      goto LAB_1400da6b;
    }
LAB_1400da88:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x16,FUN_1400e3b0);
      goto LAB_1400daa5;
    }
LAB_1400dac2:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x11,FUN_1400df80);
      goto LAB_1400dadf;
    }
LAB_1400dafc:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x12,FUN_1400e0e0);
      goto LAB_1400db19;
    }
LAB_1400db36:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xe,FUN_1400e1f0);
      goto LAB_1400db53;
    }
LAB_1400db70:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x25,FUN_1400e230);
      goto LAB_1400db8d;
    }
  }
  else {
LAB_1400da6b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,9,FUN_1400dec0);
      goto LAB_1400da88;
    }
LAB_1400daa5:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x17,FUN_1400e650);
      goto LAB_1400dac2;
    }
LAB_1400dadf:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x13,FUN_1400e030);
      goto LAB_1400dafc;
    }
LAB_1400db19:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xd,FUN_1400e1b0);
      goto LAB_1400db36;
    }
LAB_1400db53:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x19,FUN_1400e9b0);
      goto LAB_1400db70;
    }
LAB_1400db8d:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_1400dbc6;
    FUN_14008e40(param_1,1,0,0x2e,FUN_1400e2c0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,1,0,FUN_1400edd0);
  }
LAB_1400dbc6:
  FUN_14008e70(param_1);
  return;
}


