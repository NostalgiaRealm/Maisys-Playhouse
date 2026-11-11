
/* ==== FUN_120194d0 @ 120194d0 ==== 
 * signature: int __cdecl FUN_120194d0(int param_1, int param_2, undefined4 param_3, short * param_4)
 * body: 120194d0-12019564
 */

int __cdecl FUN_120194d0(int param_1,int param_2,undefined4 param_3,short *param_4)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  int local_30;
  short local_2c [22];
  
  if (param_2 != 0) {
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_30);
    DAT_12039a9c = (*pcVar2)(local_30,param_2,param_3,local_2c);
    if (*param_4 == 0x6a) {
      sVar1 = *(short *)(param_1 + 0xe);
      if (sVar1 == -1) {
        sVar1 = 0x69;
      }
      FUN_12023eb0(sVar1,param_4);
    }
    iVar3 = FUN_12018ee0(param_1,local_2c,param_4);
    return iVar3;
  }
  return 0x10000;
}


