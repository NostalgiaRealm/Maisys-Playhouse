
/* ==== FUN_0040c590 @ 0040c590 ==== 
 * signature: int __fastcall FUN_0040c590(int * param_1)
 * body: 0040c590-0040c5b1
 */

int __fastcall FUN_0040c590(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  for (piVar1 = (int *)(**(code **)(*param_1 + 0x188))(); piVar1 != (int *)0x0;
      piVar1 = (int *)(**(code **)(*piVar1 + 0x174))()) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


