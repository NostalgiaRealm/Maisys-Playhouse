
/* ==== FUN_0042d2d0 @ 0042d2d0 ==== 
 * signature: bool __thiscall FUN_0042d2d0(void * this, int * param_1)
 * body: 0042d2d0-0042d30a
 */

bool __thiscall FUN_0042d2d0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)((int)param_1 + 0x1e) & 0x10) != 0) {
    iVar1 = (**(code **)(*(int *)this + 0x244))();
    iVar2 = (**(code **)(*param_1 + 0x244))();
    return iVar1 == iVar2;
  }
  return false;
}


