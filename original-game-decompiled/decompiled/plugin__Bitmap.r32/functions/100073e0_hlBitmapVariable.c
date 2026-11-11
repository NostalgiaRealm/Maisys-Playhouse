
/* ==== hlBitmapVariable @ 100073e0 ==== 
 * signature: undefined __cdecl hlBitmapVariable(int param_1)
 * body: 100073e0-10007530
 */

void __cdecl hlBitmapVariable(int param_1)

{
                    /* 0x73e0  1  hlBitmapVariable */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined4 *)(param_1 + 0xaa) = 4;
    *(undefined4 *)(param_1 + 0xae) = 5;
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_10008610(param_1,0x10013184);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_10008edd(param_1,(undefined4 *)s__MComponent_10013030,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_10008f28(param_1,1,0,7,FUN_10007540);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_10008f28(param_1,1,0,0x22,FUN_10007550);
      if (*(short *)(param_1 + 0xb2) == 2) {
        FUN_10008f28(param_1,1,0,8,FUN_10007580);
        if (*(short *)(param_1 + 0xb2) == 2) {
          FUN_10008f28(param_1,1,0,9,FUN_100075b0);
          if (*(short *)(param_1 + 0xb2) == 2) {
            FUN_10008f28(param_1,1,0,0x2e,FUN_100075c0);
            if (*(short *)(param_1 + 0xb2) == 2) {
              FUN_10008f28(param_1,1,0,0x16,FUN_100076c0);
              if (*(short *)(param_1 + 0xb2) == 2) {
                FUN_10008f28(param_1,1,0,0x17,FUN_100077c0);
              }
            }
          }
        }
      }
    }
  }
  FUN_10008f5f(param_1);
  return;
}


