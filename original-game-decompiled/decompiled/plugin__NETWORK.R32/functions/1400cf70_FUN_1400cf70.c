
/* ==== FUN_1400cf70 @ 1400cf70 ==== 
 * signature: undefined __cdecl FUN_1400cf70(undefined4 param_1, int param_2)
 * body: 1400cf70-1400d0a6
 */

void __cdecl FUN_1400cf70(undefined4 param_1,int param_2)

{
  code *pcVar1;
  int local_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  int iStack_28;
  int iStack_24;
  undefined2 local_20;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined2 auStack_14 [3];
  undefined4 uStack_e;
  undefined4 uStack_a;
  int iStack_6;
  
  local_20 = 100;
  local_1e = 0;
  local_1a = 0;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_30);
  DAT_14028e48 = (*pcVar1)(local_30,&local_20);
  FUN_14008ed0(0,auStack_14,0);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_24);
  DAT_14028e48 = (*pcVar1)(iStack_24,auStack_14);
  if (iStack_6 != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_30);
    DAT_14028e48 = (*pcVar1)(local_30,iStack_6);
    iStack_6 = 0;
    uStack_e = 0;
    uStack_a = 0;
  }
  uStack_2a = 0;
  iStack_28 = 0;
  uStack_2c = 0x6d;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_30);
  DAT_14028e48 = (*pcVar1)(local_30,&uStack_2c);
  if (iStack_28 != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&local_30);
    DAT_14028e48 = (*pcVar1)(local_30,iStack_28);
  }
  return;
}


