
/* ==== FUN_1400b820 @ 1400b820 ==== 
 * signature: undefined __cdecl FUN_1400b820(undefined4 param_1, int param_2, undefined4 param_3)
 * body: 1400b820-1400b973
 */

void __cdecl FUN_1400b820(undefined4 param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_208;
  int iStack_204;
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  local_200[0] = 0;
  local_100[0] = 0;
  if (*(int *)(param_2 + 2) == 900) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,3,&local_208);
    DAT_14028e48 = (*pcVar1)(local_208,param_1,param_2,local_200);
  }
  else {
    FUN_14008990(local_200,&DAT_14026398);
    FUN_14008990(local_100,&DAT_14026398);
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_208);
  DAT_14028e48 = (*pcVar1)(local_208,param_3,local_200);
  if ((*(int *)(param_2 + 6) != 0) && (*(int *)(param_2 + 2) != 900)) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_208);
    DAT_14028e48 = (*pcVar1)(local_208,param_3,&DAT_140265e0);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_204);
    DAT_14028e48 = (*pcVar1)(iStack_204,param_3,local_100);
  }
  return;
}


