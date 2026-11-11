
/* ==== FUN_00421d50 @ 00421d50 ==== 
 * signature: int __thiscall FUN_00421d50(void * this, int * param_1, short param_2)
 * body: 00421d50-00421dba
 */

int __thiscall FUN_00421d50(void *this,int *param_1,short param_2)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*(int *)this + 0x114))();
  if ((param_2 < *(short *)((int)this + 0x176)) && (iVar1 = *(int *)((int)this + 0x152), iVar1 != 0)
     ) {
    iVar2 = *(int *)(iVar1 + 8 + param_2 * 0x3a);
    iVar1 = iVar1 + param_2 * 0x3a;
    *param_1 = *(int *)(iVar1 + 4);
    param_1[1] = iVar2;
    return iVar1 + 4;
  }
  iVar1 = *(int *)((int)this + 0xbc);
  *param_1 = *(int *)((int)this + 0xb8);
  param_1[1] = iVar1;
  return iVar1;
}


