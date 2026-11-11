
/* ==== FUN_00434c60 @ 00434c60 ==== 
 * signature: int __thiscall FUN_00434c60(void * this, int * param_1, int param_2, short * param_3)
 * body: 00434c60-00434d32
 */

int __thiscall FUN_00434c60(void *this,int *param_1,int param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_5c [9];
  undefined2 local_38;
  undefined4 local_36;
  int *local_8;
  
  bVar1 = FUN_00437430(param_1,(int *)s_foralldo_004dacc4);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_00455ee0(param_3,(int *)&local_8,(int *)0x0);
    if ((((iVar2 == 0) && (local_8 != (int *)0x0)) && ((*(byte *)((int)local_8 + 0x1f) & 4) != 0))
       && (iVar2 = 1, 0 < *(int *)((int)this + 0x26))) {
      do {
        iVar2 = iVar2 + 1;
        iVar3 = FUN_00430190((int)this);
        uVar4 = FUN_0048b550(*(int *)(iVar3 + -4 + *(int *)(param_2 + 2) * 0x2a));
        FUN_004301f0((int)this);
        FUN_004142c0(local_5c,0x1f9,0,this,0);
        local_38 = 3;
        local_36 = uVar4;
        (**(code **)(*local_8 + 0x1e0))(local_5c);
      } while (iVar2 <= *(int *)((int)this + 0x26));
    }
    return 0;
  }
  iVar2 = FUN_004135a0(this,param_1,param_2,param_3);
  return iVar2;
}


