
/* ==== FUN_140130d0 @ 140130d0 ==== 
 * signature: undefined4 __cdecl FUN_140130d0(short param_1, undefined4 param_2, int * param_3, undefined4 * param_4, uint * param_5)
 * body: 140130d0-140132db
 */

undefined4 __cdecl
FUN_140130d0(short param_1,undefined4 param_2,int *param_3,undefined4 *param_4,uint *param_5)

{
  int iVar1;
  undefined4 in_EAX;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int local_58;
  int iStack_54;
  int local_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  undefined1 local_40 [64];
  
  if ((param_1 != 3) && (param_1 != 4)) {
    return CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),param_1) >> 8),1);
  }
  FUN_14008990(local_40,&DAT_14026398);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_58);
  DAT_14028e48 = (*pcVar2)(local_58,&local_50,s_Content_Length__14026b6c);
  iVar1 = local_50;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_54);
  DAT_14028e48 = (*pcVar2)(iStack_54,&local_50,local_40);
  uVar4 = iVar1 + local_50 + 2;
  uVar3 = FUN_14012ae0(uVar4,param_4,param_5);
  if ((char)uVar3 != '\0') {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_58);
    uVar3 = (*pcVar2)(local_58,*param_4,&uStack_4c);
    DAT_14028e48 = uVar3;
    if (uVar3 == 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_58);
      DAT_14028e48 = (*pcVar2)(local_58,uStack_4c,s_Content_Length__14026b6c);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_54);
      DAT_14028e48 = (*pcVar2)(iStack_54,uStack_4c,local_40);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_48);
      DAT_14028e48 = (*pcVar2)(iStack_48,uStack_4c,&DAT_14026b18);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_44);
      DAT_14028e48 = (*pcVar2)(iStack_44,*param_4);
      uVar3 = DAT_14028e48 >> 8;
      *param_5 = *param_5 - uVar4;
      *param_3 = *param_3 + uVar4;
      return CONCAT31((int3)uVar3,1);
    }
  }
  return uVar3 & 0xffffff00;
}


