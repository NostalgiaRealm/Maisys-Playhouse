
/* ==== FUN_0044d6a0 @ 0044d6a0 ==== 
 * signature: undefined __fastcall FUN_0044d6a0(void * param_1)
 * body: 0044d6a0-0044d6c7
 */

void __fastcall FUN_0044d6a0(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_0044d560((int)param_1);
  iVar2 = FUN_0044e650(param_1,piVar1);
  piVar1[3] = iVar2;
  (**(code **)(*piVar1 + 0x154))(iVar2);
  return;
}


