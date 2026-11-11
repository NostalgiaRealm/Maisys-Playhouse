
/* ==== FUN_120234c0 @ 120234c0 ==== 
 * signature: undefined __cdecl FUN_120234c0(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 120234c0-12023535
 */

void __cdecl FUN_120234c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int local_30;
  short local_2c [22];
  
  iVar2 = 1;
  if (0 < param_4) {
    do {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_30);
      iVar3 = iVar2 + 1;
      DAT_12039a9c = (*pcVar1)(local_30,param_3,iVar2,local_2c);
      FUN_120190f0(param_1,local_2c);
      iVar2 = iVar3;
    } while (iVar3 <= param_4);
  }
  return;
}


