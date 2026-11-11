
/* ==== FUN_14012dc0 @ 14012dc0 ==== 
 * signature: undefined4 __cdecl FUN_14012dc0(int * param_1, undefined4 * param_2, uint * param_3)
 * body: 14012dc0-14012f37
 */

undefined4 __cdecl FUN_14012dc0(int *param_1,undefined4 *param_2,uint *param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  int local_30;
  undefined4 uStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  undefined4 local_1c [7];
  
  pcVar4 = s_User_Agent__mTropolis_2_0_14026b50;
  puVar5 = local_1c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)pcVar4;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_30);
  DAT_14028e48 = (*pcVar1)(local_30,&local_28,local_1c);
  uVar6 = local_28 + 2;
  uVar2 = FUN_14012ae0(uVar6,param_2,param_3);
  if ((char)uVar2 != '\0') {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_30);
    uVar2 = (*pcVar1)(local_30,*param_2,&uStack_2c);
    DAT_14028e48 = uVar2;
    if (uVar2 == 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_30);
      DAT_14028e48 = (*pcVar1)(local_30,uStack_2c,local_1c);
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_24);
      DAT_14028e48 = (*pcVar1)(iStack_24,uStack_2c,&DAT_14026b18);
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_20);
      DAT_14028e48 = (*pcVar1)(iStack_20,*param_2);
      uVar2 = DAT_14028e48 >> 8;
      *param_3 = *param_3 - uVar6;
      *param_1 = *param_1 + uVar6;
      return CONCAT31((int3)uVar2,1);
    }
  }
  return uVar2 & 0xffffff00;
}


