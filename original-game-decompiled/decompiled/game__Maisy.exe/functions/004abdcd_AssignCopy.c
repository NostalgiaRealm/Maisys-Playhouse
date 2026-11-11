
/* ==== CString::AssignCopy @ 004abdcd ==== 
 * signature: void __thiscall AssignCopy(CString * this, int param_1, char * param_2)
 * body: 004abdcd-004abdf9
 * note: Library Function - Single Match  protected: void __thiscall CString::AssignCopy(int,char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CString::AssignCopy(int,char const *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CString::AssignCopy(CString *this,int param_1,char *param_2)

{
  AllocBeforeWrite(this,param_1);
  FID_conflict__memcpy(*(void **)this,param_2,param_1);
  *(int *)(*(int *)this + -8) = param_1;
  *(undefined1 *)(*(int *)this + param_1) = 0;
  return;
}


