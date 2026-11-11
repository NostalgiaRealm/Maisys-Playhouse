
/* ==== FUN_004b82dc @ 004b82dc ==== 
 * signature: CObject * __thiscall FUN_004b82dc(void * this, undefined4 * param_1, undefined4 param_2)
 * body: 004b82dc-004b8357
 */

CObject * __thiscall FUN_004b82dc(void *this,undefined4 *param_1,undefined4 param_2)

{
  CObject *this_00;
  int iVar1;
  ulong uVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  this_00 = CRuntimeClass::CreateObject((CRuntimeClass *)*param_1);
  if (this_00 == (CObject *)0x0) {
    this_00 = (CObject *)0x0;
  }
  else {
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    iVar1 = (**(code **)(*(int *)this_00 + 0x58))(0,0,0x50800000,&local_14,this,param_2,param_1);
    if (iVar1 == 0) {
      this_00 = (CObject *)0x0;
    }
    else if ((DAT_004e51f8 != 0) &&
            (uVar2 = CWnd::GetExStyle((CWnd *)this_00), (uVar2 & 0x200) != 0)) {
      CWnd::ModifyStyle(this,0x200,0,0x20);
    }
  }
  return this_00;
}


