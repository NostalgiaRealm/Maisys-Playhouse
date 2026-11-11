
/* ==== FUN_0042d310 @ 0042d310 ==== 
 * signature: bool __thiscall FUN_0042d310(void * this, int * param_1)
 * body: 0042d310-0042d34c
 */

bool __thiscall FUN_0042d310(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)((int)param_1 + 0x1e) & 0x10) != 0) {
    iVar1 = (**(code **)(*param_1 + 0x244))();
    iVar2 = (**(code **)(*(int *)this + 0x244))();
    return iVar1 == iVar2;
  }
  return false;
}


