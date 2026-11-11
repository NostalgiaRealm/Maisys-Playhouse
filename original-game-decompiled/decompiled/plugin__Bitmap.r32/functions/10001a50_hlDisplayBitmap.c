
/* ==== hlDisplayBitmap @ 10001a50 ==== 
 * signature: undefined __cdecl hlDisplayBitmap(int param_1)
 * body: 10001a50-10001c33
 */

void __cdecl hlDisplayBitmap(int param_1)

{
                    /* 0x1a50  3  hlDisplayBitmap */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined4 *)(param_1 + 0xaa) = 0x46;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined2 *)(param_1 + 0xa4) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_10008610(param_1,0x100130a4);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_10008edd(param_1,(undefined4 *)s__MComponent_10013030,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_10008f28(param_1,1,0,7,FUN_10001c40);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_10008f28(param_1,1,0,0x22,FUN_10001c70);
      if (*(short *)(param_1 + 0xb2) == 2) {
        FUN_10008f28(param_1,1,0,8,FUN_10001cc0);
        if (*(short *)(param_1 + 0xb2) == 2) {
          FUN_10008f28(param_1,1,0,9,FUN_10001cf0);
          if (*(short *)(param_1 + 0xb2) == 2) {
            FUN_10008f28(param_1,1,0,0x11,FUN_10001d30);
            if (*(short *)(param_1 + 0xb2) == 2) {
              FUN_10008f28(param_1,1,0,0x13,FUN_10001de0);
              if (*(short *)(param_1 + 0xb2) == 2) {
                FUN_10008f28(param_1,1,0,0x12,FUN_10001e90);
                if (*(short *)(param_1 + 0xb2) == 2) {
                  FUN_10008f28(param_1,1,0,0x25,FUN_10001fd0);
                  if (*(short *)(param_1 + 0xb2) == 2) {
                    FUN_10008f28(param_1,1,0,0xd,FUN_10002090);
                    if (*(short *)(param_1 + 0xb2) == 2) {
                      FUN_10008f28(param_1,1,0,0xe,FUN_100020f0);
                      if (*(short *)(param_1 + 0xb2) == 2) {
                        FUN_10008f28(param_1,1,0,0x19,FUN_10002150);
                        if (*(short *)(param_1 + 0xb2) == 2) {
                          FUN_10008f28(param_1,1,1,0,FUN_10002430);
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
  }
  FUN_10008f5f(param_1);
  return;
}


