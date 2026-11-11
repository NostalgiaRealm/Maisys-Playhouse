
/* ==== FUN_1000_0848 @ 1000:0848 ==== 
 * signature: undefined __cdecl16near FUN_1000_0848(void)
 * body: 1000:0848-1000:0890;1000:0892-1000:08a1
 */

int __cdecl16near FUN_1000_0848(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar4 = (int *)*(int *)0xa8;
  if ((piVar4 != (int *)0x0) && (param_1 != 0)) {
    uVar1 = FUN_1000_07f2(param_1);
    for (; *piVar4 != 0; piVar4 = piVar4 + 1) {
      uVar2 = FUN_1000_07f2(*piVar4);
      if (((uVar1 < uVar2) && (*(char *)(*piVar4 + uVar1) == '=')) &&
         (iVar3 = FUN_1000_080e(*piVar4,param_1,uVar1), iVar3 == 0)) {
        return *piVar4 + uVar1 + 1;
      }
    }
  }
  return 0;
}


