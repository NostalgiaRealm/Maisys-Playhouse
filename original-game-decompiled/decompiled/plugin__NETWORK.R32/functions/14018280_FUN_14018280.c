
/* ==== FUN_14018280 @ 14018280 ==== 
 * signature: undefined __cdecl FUN_14018280(int param_1, undefined4 param_2, undefined4 * param_3)
 * body: 14018280-1401838c
 */

void __cdecl FUN_14018280(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  code *pcVar2;
  int local_c;
  undefined2 uStack_8;
  int iStack_6;
  
  piVar1 = (int *)(param_1 + 0x98);
  *piVar1 = 0;
  if (*(int *)(param_1 + 0x82) != 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_c);
    DAT_14028e48 = (*pcVar2)(local_c,*(undefined4 *)(param_1 + 0x82));
    *(undefined4 *)(param_1 + 0x82) = 0;
    *(undefined4 *)(param_1 + 0x7a) = 0;
    *(undefined4 *)(param_1 + 0x7e) = 0;
  }
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0x17,&local_c);
  DAT_14028e48 = (*pcVar2)(local_c,param_1 + 0x74,param_2,*param_3);
  FUN_14014b30(piVar1,param_2);
  iStack_6 = *piVar1;
  uStack_8 = 1;
  if ((iStack_6 != 0) && (iStack_6 != 200)) {
    FUN_14014ed0(param_1,*(int *)(param_1 + 0x9c),0x8fe,&uStack_8);
    return;
  }
  FUN_14014ed0(param_1,*(int *)(param_1 + 0x9c),0x8fd,&uStack_8);
  return;
}


