
/* ==== hlSaveBitmap @ 10004720 ==== 
 * signature: undefined __cdecl hlSaveBitmap(int param_1)
 * body: 10004720-100048e6
 */

void __cdecl hlSaveBitmap(int param_1)

{
                    /* 0x4720  6  hlSaveBitmap */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined4 *)(param_1 + 0xaa) = 0x6e;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_10008610(param_1,0x1001315c);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_10008edd(param_1,(undefined4 *)s__MComponent_10013030,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_10008f28(param_1,1,0,7,FUN_100048f0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_10008f28(param_1,1,0,0x22,FUN_10004930);
      if (*(short *)(param_1 + 0xb2) == 2) {
        FUN_10008f28(param_1,1,0,8,FUN_10004a20);
        if (*(short *)(param_1 + 0xb2) == 2) {
          FUN_10008f28(param_1,1,0,9,FUN_10004a50);
          if (*(short *)(param_1 + 0xb2) == 2) {
            FUN_10008f28(param_1,1,0,0x11,FUN_10004ad0);
            if (*(short *)(param_1 + 0xb2) == 2) {
              FUN_10008f28(param_1,1,0,0x13,FUN_10004be0);
              if (*(short *)(param_1 + 0xb2) == 2) {
                FUN_10008f28(param_1,1,0,0x12,FUN_10004ce0);
                if (*(short *)(param_1 + 0xb2) == 2) {
                  FUN_10008f28(param_1,1,0,0x25,FUN_10004eb0);
                  if (*(short *)(param_1 + 0xb2) == 2) {
                    FUN_10008f28(param_1,1,0,0xd,FUN_10002de0);
                    if (*(short *)(param_1 + 0xb2) == 2) {
                      FUN_10008f28(param_1,1,0,0xe,FUN_10003f80);
                      if (*(short *)(param_1 + 0xb2) == 2) {
                        FUN_10008f28(param_1,1,0,0x19,FUN_10004f70);
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


