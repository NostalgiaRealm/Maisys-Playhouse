
/* ==== FUN_00417f30 @ 00417f30 ==== 
 * signature: undefined __fastcall FUN_00417f30(int * param_1)
 * body: 00417f30-00417f6c
 */

void __fastcall FUN_00417f30(int *param_1)

{
  FUN_004a602d((LPVOID)param_1[2]);
  param_1[2] = 0;
  FUN_004a602d((LPVOID)param_1[1]);
  param_1[1] = 0;
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
  }
  *param_1 = 0;
  return;
}


