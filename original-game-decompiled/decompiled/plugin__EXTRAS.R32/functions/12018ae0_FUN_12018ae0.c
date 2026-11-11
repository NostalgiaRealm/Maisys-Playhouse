
/* ==== FUN_12018ae0 @ 12018ae0 ==== 
 * signature: undefined __cdecl FUN_12018ae0(int param_1, int param_2)
 * body: 12018ae0-12018b79
 */

void __cdecl FUN_12018ae0(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_4;
  
  piVar1 = (int *)(param_1 + 2);
  if (*piVar1 != 0) {
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar2)(local_4,*piVar1);
  }
  *piVar1 = 0;
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xf,&local_4);
  DAT_12039a9c = (*pcVar2)(local_4,piVar1,*(undefined4 *)(param_2 + 2));
  puVar4 = (undefined4 *)(param_2 + 6);
  puVar5 = (undefined4 *)(param_1 + 6);
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return;
}


