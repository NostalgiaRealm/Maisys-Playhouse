
/* ==== FUN_00436b20 @ 00436b20 ==== 
 * signature: int __thiscall FUN_00436b20(void * this, undefined4 param_1, int * param_2, undefined4 param_3)
 * body: 00436b20-00436b71
 */

int __thiscall FUN_00436b20(void *this,undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00436c80(this,param_2);
  iVar2 = FUN_00434920(DAT_004d99ac,*(SIZE_T *)(iVar1 + 0x56),0);
  if (iVar2 == 0) {
    FUN_004a3538();
  }
  FUN_00436810(this,iVar2,iVar1,*(short *)(iVar1 + 0x50),param_3);
  return (*(int *)(iVar1 + 0x56) - *(int *)(iVar1 + 0x52)) + iVar2;
}


