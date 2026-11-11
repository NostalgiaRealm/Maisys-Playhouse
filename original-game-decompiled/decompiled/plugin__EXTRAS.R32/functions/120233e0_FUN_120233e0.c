
/* ==== FUN_120233e0 @ 120233e0 ==== 
 * signature: undefined __cdecl FUN_120233e0(int param_1, int param_2, int * param_3)
 * body: 120233e0-120234bd
 */

void __cdecl FUN_120233e0(int param_1,int param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  short sVar3;
  int local_38;
  uint local_34;
  int local_30;
  short asStack_2c [22];
  
  local_34 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,&local_38);
    DAT_12039a9c = (*pcVar1)(local_38,*(undefined4 *)(param_1 + 0x10),&local_34);
  }
  sVar3 = 1;
  *param_3 = 0;
  if (local_34 != 0) {
    do {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_38);
      iVar2 = (int)sVar3;
      sVar3 = sVar3 + 1;
      DAT_12039a9c = (*pcVar1)(local_38,*(undefined4 *)(param_1 + 0x10),iVar2,asStack_2c);
      FUN_12019430(param_2,asStack_2c,&local_30);
      *param_3 = *param_3 + local_30;
    } while ((uint)(int)sVar3 <= local_34);
  }
  return;
}


