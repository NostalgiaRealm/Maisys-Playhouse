
/* ==== FUN_140147a0 @ 140147a0 ==== 
 * signature: undefined4 __cdecl FUN_140147a0(undefined4 param_1, undefined4 * param_2, undefined4 * param_3, int * param_4, undefined4 param_5, int param_6, short * param_7, short * param_8, uint param_9, int param_10, int param_11)
 * body: 140147a0-14014917
 */

uint __cdecl
FUN_140147a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,
            undefined4 param_5,int param_6,short *param_7,short *param_8,uint param_9,int param_10,
            int param_11)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_c [3];
  
  local_c[1] = 0x400;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,2,local_c);
  DAT_14028e48 = (*pcVar2)(local_c[0],0x400,param_2);
  if (DAT_14028e48 != 0) {
    return DAT_14028e48 & 0xffffff00;
  }
  uVar3 = FUN_14013e30(param_1,param_6,param_7,param_9,param_4,param_2,(uint *)(local_c + 1));
  if ((char)uVar3 != '\0') {
    uVar3 = FUN_14013ba0(param_1,param_5,param_10,param_4,param_2,(uint *)(local_c + 1));
    if ((char)uVar3 != '\0') {
      uVar3 = FUN_14012c80(param_4,param_2,param_11,(uint *)(local_c + 1));
      if ((char)uVar3 != '\0') {
        if (*param_8 == 0) {
          uVar3 = FUN_14012b90(param_4,param_2,(uint *)(local_c + 1));
          cVar1 = (char)uVar3;
        }
        else {
          cVar1 = FUN_140144d0(param_1,param_8,param_4,param_2,(uint *)(local_c + 1));
        }
        if (cVar1 != '\0') {
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,5,local_c);
          DAT_14028e48 = (*pcVar2)(local_c[0],*param_2,local_c + 2);
          uVar4 = DAT_14028e48 >> 8;
          *param_3 = local_c[2];
          return CONCAT31((int3)uVar4,1);
        }
      }
    }
  }
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,3,local_c);
  DAT_14028e48 = (*pcVar2)(local_c[0],*param_2);
  uVar4 = DAT_14028e48 & 0xffffff00;
  *param_2 = 0;
  return uVar4;
}


