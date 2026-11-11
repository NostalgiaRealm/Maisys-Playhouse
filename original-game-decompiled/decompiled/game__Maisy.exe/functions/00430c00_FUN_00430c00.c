
/* ==== FUN_00430c00 @ 00430c00 ==== 
 * signature: int __thiscall FUN_00430c00(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 00430c00-00430cc1
 */

int __thiscall FUN_00430c00(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_5c [9];
  undefined2 local_38;
  undefined4 local_36;
  int *local_8;
  
  bVar2 = FUN_00437430(param_1,(int *)s_foralldo_004dacc4);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    iVar3 = FUN_00455ee0(param_3,(int *)&local_8,(int *)0x0);
    if ((((iVar3 == 0) && (local_8 != (int *)0x0)) && ((*(byte *)((int)local_8 + 0x1f) & 4) != 0))
       && (iVar3 = 1, 0 < *(int *)((int)this + 0x26))) {
      do {
        FUN_00430190((int)this);
        iVar5 = iVar3 + 1;
        puVar4 = (undefined4 *)FUN_004301c0(this,iVar3);
        uVar1 = *puVar4;
        FUN_004301f0((int)this);
        FUN_004142c0(local_5c,0x1f9,0,this,0);
        local_38 = 3;
        local_36 = uVar1;
        (**(code **)(*local_8 + 0x1e0))(local_5c);
        iVar3 = iVar5;
      } while (iVar5 <= *(int *)((int)this + 0x26));
    }
    return 0;
  }
  iVar3 = FUN_004135a0(this,param_1,param_2,param_3);
  return iVar3;
}


