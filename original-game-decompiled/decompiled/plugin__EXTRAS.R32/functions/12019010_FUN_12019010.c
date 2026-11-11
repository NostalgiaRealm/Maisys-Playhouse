
/* ==== FUN_12019010 @ 12019010 ==== 
 * signature: undefined4 __cdecl FUN_12019010(undefined4 param_1, undefined4 * param_2, int param_3)
 * body: 12019010-12019070
 */

undefined4 __cdecl FUN_12019010(undefined4 param_1,undefined4 *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_4;
  
  if (*(int *)(param_3 + 2) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_3 + 2));
    *(undefined4 *)(param_3 + 2) = 0;
  }
  puVar3 = (undefined4 *)(param_3 + 6);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}


