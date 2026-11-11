
/* ==== FUN_0042c320 @ 0042c320 ==== 
 * signature: undefined __fastcall FUN_0042c320(int * param_1)
 * body: 0042c320-0042c343
 */

void __fastcall FUN_0042c320(int *param_1)

{
  int *piVar1;
  
  for (piVar1 = (int *)(**(code **)(*param_1 + 0x218))();
      (piVar1 != (int *)0x0 && (*(int *)((int)piVar1 + 0x2a) == 0));
      piVar1 = (int *)(**(code **)(*piVar1 + 0x218))()) {
  }
  return;
}


