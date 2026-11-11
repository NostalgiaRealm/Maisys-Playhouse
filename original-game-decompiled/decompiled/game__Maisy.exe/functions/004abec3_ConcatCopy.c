
/* ==== CString::ConcatCopy @ 004abec3 ==== 
 * signature: void __thiscall ConcatCopy(CString * this, int param_1, char * param_2, int param_3, char * param_4)
 * body: 004abec3-004abf03
 * note: Library Function - Single Match  protected: void __thiscall CString::ConcatCopy(int,char const *,int,char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CString::ConcatCopy(int,char const *,int,char const *)
   
   Library: Visual Studio 1998 Release */

void __thiscall
CString::ConcatCopy(CString *this,int param_1,char *param_2,int param_3,char *param_4)

{
  if (param_1 + param_3 != 0) {
    AllocBuffer(this,param_1 + param_3);
    FID_conflict__memcpy(*(void **)this,param_2,param_1);
    FID_conflict__memcpy((void *)(*(int *)this + param_1),param_4,param_3);
  }
  return;
}


