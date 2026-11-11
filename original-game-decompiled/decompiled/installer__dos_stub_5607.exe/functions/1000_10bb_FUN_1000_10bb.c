
/* ==== FUN_1000_10bb @ 1000:10bb ==== 
 * signature: undefined __cdecl16near FUN_1000_10bb(void)
 * body: 1000:10bb-1000:10f4
 */

void __cdecl16near FUN_1000_10bb(uint param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  do {
    bVar2 = param_1 < 0xffe8;
    if (param_1 < 0xffe9) {
      FUN_1000_10f6();
      if (!bVar2) {
        return;
      }
      FUN_1000_0682();
      if ((!bVar2) && (FUN_1000_10f6(), !bVar2)) {
        return;
      }
    }
    if (*(int *)0x148 == 0) {
      return;
    }
    iVar1 = (*(code *)*(undefined2 *)0x148)(param_1);
  } while (iVar1 != 0);
  return;
}


