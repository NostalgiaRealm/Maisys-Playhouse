
/* ==== FUN_14012b90 @ 14012b90 ==== 
 * signature: undefined4 __cdecl FUN_14012b90(int * param_1, undefined4 * param_2, uint * param_3)
 * body: 14012b90-14012c78
 */

undefined4 __cdecl FUN_14012b90(int *param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  code *pcVar2;
  int local_c;
  undefined4 local_8;
  int iStack_4;
  
  uVar1 = FUN_14012ae0(2,param_2,param_3);
  if ((char)uVar1 != '\0') {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_c);
    uVar1 = (*pcVar2)(local_c,*param_2,&local_8);
    DAT_14028e48 = uVar1;
    if (uVar1 == 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_c);
      DAT_14028e48 = (*pcVar2)(local_c,local_8,&DAT_14026b18);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_4);
      DAT_14028e48 = (*pcVar2)(iStack_4,*param_2);
      uVar1 = DAT_14028e48 >> 8;
      *param_3 = *param_3 - 2;
      *param_1 = *param_1 + 2;
      return CONCAT31((int3)uVar1,1);
    }
  }
  return uVar1 & 0xffffff00;
}


