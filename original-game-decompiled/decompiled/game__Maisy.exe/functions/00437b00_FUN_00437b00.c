
/* ==== FUN_00437b00 @ 00437b00 ==== 
 * signature: void * __thiscall FUN_00437b00(void * this, void * param_1, int * param_2)
 * body: 00437b00-00437b8c
 */

void * __thiscall FUN_00437b00(void *this,void *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00436c80(this,param_2);
  if (iVar1 == 0) {
    return param_1;
  }
  iVar2 = FUN_00434920(DAT_004d99ac,*(SIZE_T *)(iVar1 + 0x56),0);
  if (iVar2 != 0) {
    FUN_00471fc0(param_1,param_2,*(short *)(iVar1 + 0x4c) << 8 | *(ushort *)(iVar1 + 0x4e),
                 (*(int *)(iVar1 + 0x56) - *(int *)(iVar1 + 0x52)) + iVar2);
    FUN_004366f0(this,iVar2,iVar1,*(short *)(iVar1 + 0x50),param_1,0);
    return param_1;
  }
  return param_1;
}


