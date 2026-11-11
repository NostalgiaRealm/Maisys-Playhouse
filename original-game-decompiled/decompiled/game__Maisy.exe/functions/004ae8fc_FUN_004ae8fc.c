
/* ==== FUN_004ae8fc @ 004ae8fc ==== 
 * signature: undefined __stdcall FUN_004ae8fc(int param_1, char * param_2)
 * body: 004ae8fc-004ae91f
 */

void FUN_004ae8fc(int param_1,char *param_2)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    puVar1 = FUN_0048f9e0();
    uVar3 = *puVar1;
    iVar2 = FUN_004aea95(param_1);
    AfxThrowFileException(iVar2,uVar3,param_2);
  }
  return;
}


