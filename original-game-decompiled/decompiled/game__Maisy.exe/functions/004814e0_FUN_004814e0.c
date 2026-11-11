
/* ==== FUN_004814e0 @ 004814e0 ==== 
 * signature: char __fastcall FUN_004814e0(int * param_1)
 * body: 004814e0-004814f1
 */

char __fastcall FUN_004814e0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xe8))();
  return '\x01' - (iVar1 == 0);
}


