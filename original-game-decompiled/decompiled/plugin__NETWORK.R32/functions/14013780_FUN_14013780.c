
/* ==== FUN_14013780 @ 14013780 ==== 
 * signature: undefined4 __cdecl FUN_14013780(undefined4 param_1, undefined4 * param_2, undefined4 * param_3, int * param_4, int param_5, short param_6, int param_7, undefined4 param_8, undefined4 param_9)
 * body: 14013780-140138fc
 */

uint __cdecl
FUN_14013780(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,int param_5,
            short param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_c;
  int local_8;
  undefined4 uStack_4;
  
  local_c = 0x400;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,2,&local_8);
  DAT_14028e48 = (*pcVar1)(local_8,0x400,param_2);
  if (DAT_14028e48 != 0) {
    return DAT_14028e48 & 0xffffff00;
  }
  uVar2 = FUN_140132e0(param_5,param_6,param_4,param_2,&local_c);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_14012dc0(param_4,param_2,&local_c);
    if ((char)uVar2 != '\0') {
      uVar2 = FUN_14012c80(param_4,param_2,param_7,&local_c);
      if ((char)uVar2 != '\0') {
        uVar2 = FUN_140130d0(param_6,param_9,param_4,param_2,&local_c);
        if ((char)uVar2 != '\0') {
          uVar2 = FUN_14012b90(param_4,param_2,&local_c);
          if ((char)uVar2 != '\0') {
            uVar2 = FUN_14012f40(param_6,param_8,param_4,param_2,&local_c);
            if ((char)uVar2 != '\0') {
              pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,5,&local_8);
              DAT_14028e48 = (*pcVar1)(local_8,*param_2,&uStack_4);
              uVar3 = DAT_14028e48 >> 8;
              *param_3 = uStack_4;
              return CONCAT31((int3)uVar3,1);
            }
          }
        }
      }
    }
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,3,&local_8);
  DAT_14028e48 = (*pcVar1)(local_8,*param_2);
  uVar3 = DAT_14028e48 & 0xffffff00;
  *param_2 = 0;
  return uVar3;
}


