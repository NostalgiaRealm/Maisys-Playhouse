
/* ==== FUN_0045a150 @ 0045a150 ==== 
 * signature: undefined __fastcall FUN_0045a150(int param_1)
 * body: 0045a150-0045a173
 */

void __fastcall FUN_0045a150(int param_1)

{
  short sVar1;
  
  if ((*(int *)(param_1 + 0x72) != 0) &&
     (sVar1 = *(short *)(*(int *)(param_1 + 0x72) + 0xc), 0 < sVar1)) {
    do {
      FUN_004308b0(*(void **)(param_1 + 0x72),sVar1);
      sVar1 = sVar1 + -1;
    } while (sVar1 != 0);
  }
  return;
}


