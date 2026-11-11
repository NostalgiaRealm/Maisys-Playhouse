
/* ==== FUN_14013ba0 @ 14013ba0 ==== 
 * signature: undefined4 __cdecl FUN_14013ba0(undefined4 param_1, undefined4 param_2, int param_3, int * param_4, undefined4 * param_5, uint * param_6)
 * body: 14013ba0-14013e23
 */

undefined4 __cdecl
FUN_14013ba0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined4 *param_5,
            uint *param_6)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int local_218;
  int iStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  int iStack_208;
  int iStack_204;
  undefined1 local_200 [512];
  
  if (param_3 == 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,1,&local_218);
    uVar3 = (*pcVar2)(local_218,param_2,0x2f,local_200,0);
  }
  else {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_218);
    uVar3 = (*pcVar2)(local_218,local_200,param_3);
  }
  DAT_14028e48 = uVar3;
  if (uVar3 == 0) {
    FUN_140124c0((int)local_200);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_218);
    DAT_14028e48 = (*pcVar2)(local_218,&iStack_210,local_200);
    iVar1 = iStack_210;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_214);
    DAT_14028e48 = (*pcVar2)(iStack_214,&iStack_210,s_SNDR__14026bc4);
    uVar4 = iVar1 + iStack_210 + 2;
    uVar3 = FUN_14012ae0(uVar4,param_5,param_6);
    if ((char)uVar3 != '\0') {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_218);
      uVar3 = (*pcVar2)(local_218,*param_5,&uStack_20c);
      DAT_14028e48 = uVar3;
      if (uVar3 == 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_218);
        DAT_14028e48 = (*pcVar2)(local_218,uStack_20c,s_SNDR__14026bc4);
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_214);
        DAT_14028e48 = (*pcVar2)(iStack_214,uStack_20c,local_200);
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_208);
        DAT_14028e48 = (*pcVar2)(iStack_208,uStack_20c,&DAT_14026b18);
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_204);
        DAT_14028e48 = (*pcVar2)(iStack_204,*param_5);
        uVar3 = DAT_14028e48 >> 8;
        *param_6 = *param_6 - uVar4;
        *param_4 = *param_4 + uVar4;
        return CONCAT31((int3)uVar3,1);
      }
    }
  }
  return uVar3 & 0xffffff00;
}


