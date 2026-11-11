
/* ==== FUN_1400ccb0 @ 1400ccb0 ==== 
 * signature: undefined4 __cdecl FUN_1400ccb0(int param_1, char * param_2, undefined4 * param_3)
 * body: 1400ccb0-1400cdb7
 */

undefined4 __cdecl FUN_1400ccb0(int param_1,char *param_2,undefined4 *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int local_458;
  uint auStack_454 [21];
  undefined1 auStack_400 [1024];
  
  piVar1 = (int *)(param_1 + 0x9e);
  if (*piVar1 == 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,0,&local_458);
    DAT_14028e48 = (*pcVar2)(local_458,0xc,piVar1);
  }
  else {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,8,&local_458);
    DAT_14028e48 = (*pcVar2)(local_458,*piVar1);
  }
  FUN_14015100(param_2,param_3,*piVar1);
  iVar3 = FUN_140157b0(param_1,*(uint *)(param_1 + 0xce),*piVar1,auStack_454,auStack_400);
  if (iVar3 == 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x17,&local_458);
    puVar5 = auStack_454;
    uVar4 = FUN_14008a80(param_1);
    DAT_14028e48 = (*pcVar2)(local_458,uVar4,puVar5);
  }
  return 0;
}


