
/* ==== FUN_14012230 @ 14012230 ==== 
 * signature: int __cdecl FUN_14012230(int param_1, int param_2, undefined4 * param_3)
 * body: 14012230-140123be
 */

int __cdecl FUN_14012230(int param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  int local_60;
  undefined4 local_5c;
  undefined2 uStack_58;
  undefined4 uStack_56;
  undefined4 uStack_52;
  undefined4 uStack_4e;
  undefined4 uStack_4a;
  undefined2 uStack_2c;
  undefined4 uStack_2a;
  undefined4 uStack_26;
  undefined4 uStack_22;
  undefined4 uStack_1e;
  
  *param_3 = 0;
  if ((*(int *)(param_2 + 2) != 0x65) && (*(int *)(param_2 + 2) != 0x69)) {
    return 0x10000;
  }
  pcVar1 = (code *)FUN_14008ab0(param_1,0,0x20,&local_60);
  iVar2 = (*pcVar1)(local_60,&local_5c);
  DAT_14028e48 = iVar2;
  if (iVar2 == 0) {
    uStack_58 = 0x69;
    uStack_52 = 0;
    uStack_2c = 0x69;
    uStack_4e = 0;
    uStack_56 = 0;
    uStack_4a = 0;
    uStack_26 = 0;
    uStack_22 = 0;
    uStack_2a = 0;
    uStack_1e = 0;
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_60);
    iVar2 = (*pcVar1)(local_60,local_5c,s_worldmanager_14026854,0,&uStack_58);
    DAT_14028e48 = iVar2;
    if (iVar2 == 0) {
      if (*(int *)(param_2 + 2) == 0x65) {
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_60);
        pcVar3 = s_sharedscene_14026840;
      }
      else {
        if (*(int *)(param_2 + 2) != 0x69) {
          return 0x10000;
        }
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_60);
        pcVar3 = s_currentscene_1402682c;
      }
      DAT_14028e48 = (*pcVar1)(local_60,uStack_56,pcVar3,0,&uStack_2c);
      if (DAT_14028e48 != 0) {
        return DAT_14028e48;
      }
      *param_3 = uStack_2a;
      iVar2 = 0;
    }
  }
  return iVar2;
}


