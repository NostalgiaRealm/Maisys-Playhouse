
/* ==== hlCaptureBitmap @ 10001000 ==== 
 * signature: undefined __cdecl hlCaptureBitmap(int param_1)
 * body: 10001000-100011e3
 */

void __cdecl hlCaptureBitmap(int param_1)

{
                    /* 0x1000  2  hlCaptureBitmap */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined4 *)(param_1 + 0xaa) = 0x40;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined2 *)(param_1 + 0xa4) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_10008610(param_1,0x10013044);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_10008edd(param_1,(undefined4 *)s__MComponent_10013030,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_10008f28(param_1,1,0,7,FUN_100011f0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_10008f28(param_1,1,0,0x22,FUN_10001220);
      if (*(short *)(param_1 + 0xb2) == 2) {
        FUN_10008f28(param_1,1,0,8,FUN_10001260);
        if (*(short *)(param_1 + 0xb2) == 2) {
          FUN_10008f28(param_1,1,0,9,FUN_10001290);
          if (*(short *)(param_1 + 0xb2) == 2) {
            FUN_10008f28(param_1,1,0,0x11,FUN_100012d0);
            if (*(short *)(param_1 + 0xb2) == 2) {
              FUN_10008f28(param_1,1,0,0x13,FUN_10001350);
              if (*(short *)(param_1 + 0xb2) == 2) {
                FUN_10008f28(param_1,1,0,0x12,FUN_100013e0);
                if (*(short *)(param_1 + 0xb2) == 2) {
                  FUN_10008f28(param_1,1,0,0x25,FUN_100014d0);
                  if (*(short *)(param_1 + 0xb2) == 2) {
                    FUN_10008f28(param_1,1,0,0xd,FUN_10002de0);
                    if (*(short *)(param_1 + 0xb2) == 2) {
                      FUN_10008f28(param_1,1,0,0xe,FUN_10003f80);
                      if (*(short *)(param_1 + 0xb2) == 2) {
                        FUN_10008f28(param_1,1,0,0x19,FUN_10001560);
                        if (*(short *)(param_1 + 0xb2) == 2) {
                          FUN_10008f28(param_1,1,1,0,FUN_100018e0);
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


