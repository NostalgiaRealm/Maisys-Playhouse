
/* ==== FUN_1000_109a @ 1000:109a ==== 
 * signature: undefined __cdecl16near FUN_1000_109a(void)
 * body: 1000:109a-1000:10ba
 */

void __cdecl16near FUN_1000_109a(uint param_1)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  if (*(uint *)0x4e < param_1) {
    pbVar1 = (byte *)(param_1 - 2);
    *pbVar1 = *pbVar1 | 1;
    if (pbVar1 < (byte *)*(undefined2 *)0x50) {
      *(undefined2 *)0x50 = pbVar1;
    }
  }
  return;
}


