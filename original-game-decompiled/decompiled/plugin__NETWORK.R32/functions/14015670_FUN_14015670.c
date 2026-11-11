
/* ==== FUN_14015670 @ 14015670 ==== 
 * signature: undefined4 __cdecl FUN_14015670(undefined4 param_1, undefined4 param_2, uint * param_3)
 * body: 14015670-140157aa
 */

uint __cdecl FUN_14015670(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  code *pcVar1;
  uint uVar2;
  int local_20;
  int iStack_1c;
  uint uStack_18;
  undefined4 local_14;
  int iStack_10;
  int aiStack_c [3];
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_20);
  DAT_14028e48 = (*pcVar1)(local_20,&local_14,param_2);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&iStack_1c);
  uVar2 = 1;
  DAT_14028e48 = (*pcVar1)(iStack_1c,param_1,&uStack_18);
  if (uStack_18 != 0) {
    do {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_20);
      DAT_14028e48 = (*pcVar1)(local_20,param_1,uVar2,aiStack_c);
      if (aiStack_c[0] != 0) {
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,5,&iStack_1c);
        DAT_14028e48 = (*pcVar1)(iStack_1c,&iStack_10,aiStack_c[0],param_2,local_14);
        if (iStack_10 == 0) {
          *param_3 = uVar2;
          return CONCAT31((int3)((uint)param_3 >> 8),1);
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= uStack_18);
  }
  return DAT_14028e48 & 0xffffff00;
}


