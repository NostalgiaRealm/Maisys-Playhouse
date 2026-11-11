
/* ==== FUN_00437920 @ 00437920 ==== 
 * signature: undefined1 __thiscall FUN_00437920(void * this, void * param_1, int * param_2)
 * body: 00437920-00437997
 */

undefined1 __thiscall FUN_00437920(void *this,void *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_00436c80(this,param_2);
  if (iVar1 != 0) {
    iVar2 = FUN_00434920(DAT_004d99ac,*(SIZE_T *)(iVar1 + 0x56),0);
    if (iVar2 != 0) {
      FUN_00417b90(param_1,param_2,*(short *)(iVar1 + 0x4c) << 8 | *(ushort *)(iVar1 + 0x4e),
                   (*(int *)(iVar1 + 0x56) - *(int *)(iVar1 + 0x52)) + iVar2);
      uVar3 = 1;
      FUN_004366f0(this,iVar2,iVar1,*(short *)(iVar1 + 0x50),param_1,0);
    }
  }
  return uVar3;
}


