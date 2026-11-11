
/* ==== FUN_0040c560 @ 0040c560 ==== 
 * signature: int __fastcall FUN_0040c560(int * param_1)
 * body: 0040c560-0040c581
 */

int __fastcall FUN_0040c560(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  for (piVar1 = (int *)(**(code **)(*param_1 + 0x184))(); piVar1 != (int *)0x0;
      piVar1 = (int *)(**(code **)(*piVar1 + 0x17c))()) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


