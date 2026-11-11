
/* ==== FUN_00445ef0 @ 00445ef0 ==== 
 * signature: int __thiscall FUN_00445ef0(void * this, int param_1, int param_2)
 * body: 00445ef0-00445f9f
 */

int __thiscall FUN_00445ef0(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  SIZE_T SVar4;
  
  iVar1 = FUN_00460400(this,param_1,param_2);
  if (9 < param_2) {
    if (*(int *)((int)this + 0x52) != 0) {
      piVar2 = FUN_0046da90(this,'\x01','\x01');
      iVar3 = (**(code **)(*piVar2 + 0x80))(0x7fffffff,10);
      iVar1 = iVar1 + iVar3;
    }
    if (100 < param_2) {
      if (*(HGLOBAL *)((int)this + 0x14a) != (HGLOBAL)0x0) {
        SVar4 = GlobalSize(*(HGLOBAL *)((int)this + 0x14a));
        iVar1 = iVar1 + SVar4;
        FUN_0043f7a0(*(HGLOBAL *)((int)this + 0x14a));
        *(undefined4 *)((int)this + 0x14a) = 0;
      }
      if (*(HGLOBAL *)((int)this + 0x14e) != (HGLOBAL)0x0) {
        SVar4 = GlobalSize(*(HGLOBAL *)((int)this + 0x14e));
        iVar1 = iVar1 + SVar4;
        FUN_0043f7a0(*(HGLOBAL *)((int)this + 0x14e));
        *(undefined4 *)((int)this + 0x14e) = 0;
      }
    }
  }
  return iVar1;
}


