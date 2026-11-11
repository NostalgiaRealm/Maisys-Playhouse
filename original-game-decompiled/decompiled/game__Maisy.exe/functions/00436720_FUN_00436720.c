
/* ==== FUN_00436720 @ 00436720 ==== 
 * signature: undefined __thiscall FUN_00436720(void * this, int param_1, int param_2, short param_3, undefined4 param_4, int param_5, undefined4 param_6)
 * body: 00436720-00436805
 */

void __thiscall
FUN_00436720(void *this,int param_1,int param_2,short param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != 0) {
    FUN_00436720(this,param_1,
                 *(int *)((int)this + *(short *)(param_2 + 0x48) * 0x124 + 0x13c) +
                 *(short *)(param_2 + 0x4a) * 0x80,param_3 + -1,param_4,param_5,param_6);
  }
  iVar3 = *(int *)(*(int *)(param_2 + 0x66) + param_3 * 4) + param_1;
  *(int *)(param_1 + 0x14) = iVar3;
  *(int *)(iVar3 + -4) = param_2 + 0x62;
  *(int *)(iVar3 + -8) = param_1;
  if ((char)param_6 == '\0') {
    if (param_5 == 0) {
      pcVar1 = (code *)FUN_0048b4b0(0,iVar3,7);
      DAT_004e34cc = (*pcVar1)(iVar3);
      return;
    }
    iVar2 = *(int *)(*(int *)(param_2 + 0x66) + param_3 * 4) + param_5;
    pcVar1 = (code *)FUN_0048b4b0(0,iVar3,8);
    DAT_004e34cc = (*pcVar1)(iVar3,iVar2);
    return;
  }
  pcVar1 = (code *)FUN_0048b4b0(0,iVar3,0);
  DAT_004e34cc = (*pcVar1)(iVar3,param_4);
  return;
}


