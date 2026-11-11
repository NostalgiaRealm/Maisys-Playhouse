
/* ==== FUN_004a59ef @ 004a59ef ==== 
 * signature: undefined __fastcall FUN_004a59ef(int param_1)
 * body: 004a59ef-004a5a39
 */

void __fastcall FUN_004a59ef(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  CPlex *pCVar4;
  
  piVar1 = (int *)(param_1 + 0x10);
  if (*piVar1 == 0) {
    pCVar4 = CPlex::Create((CPlex **)(param_1 + 0x14),*(uint *)(param_1 + 0x18),0x10);
    iVar2 = *(int *)(param_1 + 0x18);
    pCVar4 = pCVar4 + iVar2 * 0x10 + -0xc;
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      *(int *)pCVar4 = *piVar1;
      *piVar1 = (int)pCVar4;
      pCVar4 = pCVar4 + -0x10;
    }
  }
  piVar3 = (int *)*piVar1;
  *piVar1 = *piVar3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  return;
}


