
/* ==== hlPrintBitmap @ 10003540 ==== 
 * signature: undefined __cdecl hlPrintBitmap(int param_1)
 * body: 10003540-10003706
 */

void __cdecl hlPrintBitmap(int param_1)

{
                    /* 0x3540  5  hlPrintBitmap */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined4 *)(param_1 + 0xaa) = 0xa6;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_10008610(param_1,0x10013140);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_10008edd(param_1,(undefined4 *)s__MComponent_10013030,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_10008f28(param_1,1,0,7,FUN_10003710);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_10008f28(param_1,1,0,0x22,FUN_10003760);
      if (*(short *)(param_1 + 0xb2) == 2) {
        FUN_10008f28(param_1,1,0,8,FUN_100037f0);
        if (*(short *)(param_1 + 0xb2) == 2) {
          FUN_10008f28(param_1,1,0,9,FUN_10003820);
          if (*(short *)(param_1 + 0xb2) == 2) {
            FUN_10008f28(param_1,1,0,0x11,FUN_100038d0);
            if (*(short *)(param_1 + 0xb2) == 2) {
              FUN_10008f28(param_1,1,0,0x13,FUN_10003a70);
              if (*(short *)(param_1 + 0xb2) == 2) {
                FUN_10008f28(param_1,1,0,0x12,FUN_10003be0);
                if (*(short *)(param_1 + 0xb2) == 2) {
                  FUN_10008f28(param_1,1,0,0x25,FUN_10003e90);
                  if (*(short *)(param_1 + 0xb2) == 2) {
                    FUN_10008f28(param_1,1,0,0xd,FUN_10002de0);
                    if (*(short *)(param_1 + 0xb2) == 2) {
                      FUN_10008f28(param_1,1,0,0xe,FUN_10003f80);
                      if (*(short *)(param_1 + 0xb2) == 2) {
                        FUN_10008f28(param_1,1,0,0x19,FUN_10004040);
                      }
                    }
                  }
                }
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


