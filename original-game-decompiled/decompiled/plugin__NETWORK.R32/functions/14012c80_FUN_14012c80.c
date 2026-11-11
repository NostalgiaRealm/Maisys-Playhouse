
/* ==== FUN_14012c80 @ 14012c80 ==== 
 * signature: undefined4 __cdecl FUN_14012c80(int * param_1, undefined4 * param_2, int param_3, uint * param_4)
 * body: 14012c80-14012dbc
 */

undefined4 __cdecl FUN_14012c80(int *param_1,undefined4 *param_2,int param_3,uint *param_4)

{
  undefined4 in_EAX;
  code *pcVar1;
  uint uVar2;
  int local_10;
  uint local_c;
  undefined4 uStack_8;
  int iStack_4;
  
  if (param_3 == 0) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_10);
  DAT_14028e48 = (*pcVar1)(local_10,&local_c,param_3);
  uVar2 = FUN_14012ae0(local_c,param_2,param_4);
  if ((char)uVar2 != '\0') {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_10);
    uVar2 = (*pcVar1)(local_10,*param_2,&uStack_8);
    DAT_14028e48 = uVar2;
    if (uVar2 == 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_10);
      DAT_14028e48 = (*pcVar1)(local_10,uStack_8,param_3);
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_4);
      DAT_14028e48 = (*pcVar1)(iStack_4,*param_2);
      uVar2 = DAT_14028e48 >> 8;
      *param_4 = *param_4 - local_c;
      *param_1 = *param_1 + local_c;
      return CONCAT31((int3)uVar2,1);
    }
  }
  return uVar2 & 0xffffff00;
}


