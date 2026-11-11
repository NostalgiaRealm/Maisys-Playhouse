
/* ==== FUN_14012f40 @ 14012f40 ==== 
 * signature: undefined4 __cdecl FUN_14012f40(short param_1, undefined4 param_2, int * param_3, undefined4 * param_4, uint * param_5)
 * body: 14012f40-140130c0
 */

undefined4 __cdecl
FUN_14012f40(short param_1,undefined4 param_2,int *param_3,undefined4 *param_4,uint *param_5)

{
  undefined4 in_EAX;
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int local_14;
  undefined4 uStack_10;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  if ((param_1 != 3) && (param_1 != 4)) {
    return CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),param_1) >> 8),1);
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_14);
  DAT_14028e48 = (*pcVar1)(local_14,&local_c,param_2);
  uVar3 = local_c + 2;
  uVar2 = FUN_14012ae0(uVar3,param_4,param_5);
  if ((char)uVar2 != '\0') {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_14);
    uVar2 = (*pcVar1)(local_14,*param_4,&uStack_10);
    DAT_14028e48 = uVar2;
    if (uVar2 == 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_14);
      DAT_14028e48 = (*pcVar1)(local_14,uStack_10,param_2);
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_8);
      DAT_14028e48 = (*pcVar1)(iStack_8,uStack_10,&DAT_14026b18);
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_4);
      DAT_14028e48 = (*pcVar1)(iStack_4,*param_4);
      uVar2 = DAT_14028e48 >> 8;
      *param_5 = *param_5 - uVar3;
      *param_3 = *param_3 + uVar3;
      return CONCAT31((int3)uVar2,1);
    }
  }
  return uVar2 & 0xffffff00;
}


