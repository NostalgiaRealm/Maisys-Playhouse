
/* ==== FUN_004404f0 @ 004404f0 ==== 
 * signature: int __thiscall FUN_004404f0(void * this, int param_1, int param_2, int param_3, undefined1 param_4, undefined1 param_5)
 * body: 004404f0-00440578
 */

int __thiscall
FUN_004404f0(void *this,int param_1,int param_2,int param_3,undefined1 param_4,undefined1 param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_00434920(DAT_004d99ac,0x16,1);
  if (piVar2 == (int *)0x0) {
    FUN_004a3538();
  }
  *piVar2 = DAT_004db59c;
  DAT_004db59c = DAT_004db59c + 1;
  piVar2[1] = param_1;
  piVar2[2] = param_2;
  piVar2[3] = param_3;
  *(undefined1 *)(piVar2 + 4) = param_4;
  *(undefined1 *)((int)piVar2 + 0x11) = param_5;
  *(undefined4 *)((int)piVar2 + 0x12) = 0;
  iVar3 = FUN_004404b0((int)this);
  if (iVar3 == 0) {
    FUN_004404c0(this,piVar2);
    return *piVar2;
  }
  iVar1 = *(int *)(iVar3 + 0x12);
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar3 + 0x12);
    iVar1 = *(int *)(iVar3 + 0x12);
  }
  *(int **)(iVar3 + 0x12) = piVar2;
  return *piVar2;
}


