
/* ==== FUN_0046ca90 @ 0046ca90 ==== 
 * signature: int __fastcall FUN_0046ca90(int param_1)
 * body: 0046ca90-0046cab3
 */

int __fastcall FUN_0046ca90(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x21) & 0x40) != 0) {
    return param_1;
  }
  iVar1 = *(int *)(param_1 + 0x62);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(uint *)(iVar1 + 0x1e) & 0x40000000) != 0) break;
    iVar1 = *(int *)(iVar1 + 0x62);
  }
  return iVar1;
}


