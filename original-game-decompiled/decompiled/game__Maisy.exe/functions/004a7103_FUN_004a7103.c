
/* ==== FUN_004a7103 @ 004a7103 ==== 
 * signature: CObject * __stdcall FUN_004a7103(CRuntimeClass * param_1, int param_2, uint param_3, uint param_4, void * param_5)
 * body: 004a7103-004a7143
 */

CObject * FUN_004a7103(CRuntimeClass *param_1,int param_2,uint param_3,uint param_4,void *param_5)

{
  CObject *this;
  int iVar1;
  
  this = CRuntimeClass::CreateObject(param_1);
  if (this == (CObject *)0x0) {
    FUN_004a3538();
  }
  *(undefined4 *)(this + 0x4c) = 0;
  iVar1 = FUN_004a725a(this,param_4 | 4,param_3,param_5);
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0x7c))();
    this = (CObject *)0x0;
  }
  else {
    SetThreadPriority(*(HANDLE *)(this + 0x28),param_2);
    if ((param_4 & 4) == 0) {
      ResumeThread(*(HANDLE *)(this + 0x28));
    }
  }
  return this;
}


