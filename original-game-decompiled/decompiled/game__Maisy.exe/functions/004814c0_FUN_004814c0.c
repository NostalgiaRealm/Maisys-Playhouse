
/* ==== FUN_004814c0 @ 004814c0 ==== 
 * signature: char __fastcall FUN_004814c0(int * param_1)
 * body: 004814c0-004814d1
 */

char __fastcall FUN_004814c0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xe8))();
  return '\x01' - (iVar1 == 0);
}


