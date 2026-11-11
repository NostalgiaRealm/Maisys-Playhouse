
/* ==== FUN_14006fa0 @ 14006fa0 ==== 
 * signature: undefined4 __cdecl FUN_14006fa0(undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 * param_5)
 * body: 14006fa0-140070c4
 */

undefined4 __cdecl
FUN_14006fa0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 *param_5)

{
  code *pcVar1;
  int local_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  
  if (*(int *)(param_3 + 0xde) == 0) {
    *param_5 = 0xffffffff;
  }
  else {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(param_3 + 0xde),(int)*(short *)(param_3 + 0xe2),
                                  (int)*(short *)(param_3 + 0xe4),&local_4c);
    DAT_14028e48 = (*pcVar1)(local_4c,param_4,param_5,param_3);
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_4c);
  DAT_14028e48 = (*pcVar1)(local_4c,*(undefined4 *)(param_3 + 0x94),1,auStack_48);
  if ((DAT_14028e48 == 0) && (iStack_44 != 0)) {
    FUN_14008dc0(iStack_44);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&local_4c);
    DAT_14028e48 = (*pcVar1)(local_4c,iStack_44);
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,5,&local_4c);
  DAT_14028e48 = (*pcVar1)(local_4c,*(undefined4 *)(param_3 + 0x94),1);
  return 0;
}


