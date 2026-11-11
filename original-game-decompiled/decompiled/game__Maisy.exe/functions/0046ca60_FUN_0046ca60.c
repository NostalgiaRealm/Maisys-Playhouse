
/* ==== FUN_0046ca60 @ 0046ca60 ==== 
 * signature: int __fastcall FUN_0046ca60(int param_1)
 * body: 0046ca60-0046ca85
 */

int __fastcall FUN_0046ca60(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x22) == 0x40) {
    return param_1;
  }
  iVar1 = *(int *)(param_1 + 0x62);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(short *)(iVar1 + 0x22) == 0x40) break;
    iVar1 = *(int *)(iVar1 + 0x62);
  }
  return iVar1;
}


