
/* ==== CString::AllocCopy @ 004abccd ==== 
 * signature: void __thiscall AllocCopy(CString * this, CString * param_1, int param_2, int param_3, int param_4)
 * body: 004abccd-004abd10
 * note: Library Function - Single Match  protected: void __thiscall CString::AllocCopy(class CString &,int,int,int)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CString::AllocCopy(class CString &,int,int,int)const 
   
   Library: Visual Studio 1998 Release */

void __thiscall
CString::AllocCopy(CString *this,CString *param_1,int param_2,int param_3,int param_4)

{
  undefined **ppuVar1;
  
  if (param_4 + param_2 == 0) {
    ppuVar1 = FUN_004abb3e();
    *(undefined **)param_1 = *ppuVar1;
  }
  else {
    AllocBuffer(param_1,param_4 + param_2);
    FID_conflict__memcpy(*(void **)param_1,(void *)(*(int *)this + param_3),param_2);
  }
  return;
}


