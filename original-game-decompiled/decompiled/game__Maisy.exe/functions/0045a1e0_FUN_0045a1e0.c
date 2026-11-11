
/* ==== FUN_0045a1e0 @ 0045a1e0 ==== 
 * signature: undefined __fastcall FUN_0045a1e0(int param_1)
 * body: 0045a1e0-0045a1ff
 */

void __fastcall FUN_0045a1e0(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x76) + 0xc);
  if (0 < sVar1) {
    do {
      FUN_004308b0(*(void **)(param_1 + 0x76),sVar1);
      sVar1 = sVar1 + -1;
    } while (sVar1 != 0);
  }
  return;
}


