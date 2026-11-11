
/* ==== FUN_0040c5c0 @ 0040c5c0 ==== 
 * signature: int __fastcall FUN_0040c5c0(int * param_1)
 * body: 0040c5c0-0040c5e1
 */

int __fastcall FUN_0040c5c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  for (piVar1 = (int *)(**(code **)(*param_1 + 0x18c))(); piVar1 != (int *)0x0;
      piVar1 = (int *)(**(code **)(*piVar1 + 0x174))()) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


