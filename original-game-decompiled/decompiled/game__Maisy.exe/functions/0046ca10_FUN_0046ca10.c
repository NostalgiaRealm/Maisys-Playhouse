
/* ==== FUN_0046ca10 @ 0046ca10 ==== 
 * signature: int __fastcall FUN_0046ca10(int param_1)
 * body: 0046ca10-0046ca57
 */

int __fastcall FUN_0046ca10(int param_1)

{
  int iVar1;
  
  if (((*(short *)(param_1 + 0x60) == 0) && ((*(byte *)(param_1 + 0x21) & 0x40) == 0)) &&
     (*(short *)(param_1 + 0x22) != 0x43)) {
    return param_1;
  }
  iVar1 = *(int *)(param_1 + 0x62);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (((*(short *)(iVar1 + 0x60) == 0) && ((*(uint *)(iVar1 + 0x1e) & 0x40000000) == 0)) &&
       (*(short *)(iVar1 + 0x22) != 0x43)) break;
    iVar1 = *(int *)(iVar1 + 0x62);
  }
  return iVar1;
}


