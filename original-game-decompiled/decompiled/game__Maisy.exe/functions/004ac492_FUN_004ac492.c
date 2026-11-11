
/* ==== FUN_004ac492 @ 004ac492 ==== 
 * signature: bool __fastcall FUN_004ac492(undefined4 * param_1)
 * body: 004ac492-004ac4a4
 */

bool __fastcall FUN_004ac492(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_1)();
  return (bool)('\x01' - (*(int *)(iVar1 + 8) == 0xffff));
}


