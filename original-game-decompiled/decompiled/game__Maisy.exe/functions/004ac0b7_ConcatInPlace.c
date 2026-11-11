
/* ==== CString::ConcatInPlace @ 004ac0b7 ==== 
 * signature: void __thiscall ConcatInPlace(CString * this, int param_1, char * param_2)
 * body: 004ac0b7-004ac114
 * note: Library Function - Single Match  protected: void __thiscall CString::ConcatInPlace(int,char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CString::ConcatInPlace(int,char const *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CString::ConcatInPlace(CString *this,int param_1,char *param_2)

{
  char *pcVar1;
  
  if (param_1 != 0) {
    pcVar1 = *(char **)this;
    if ((*(int *)(pcVar1 + -0xc) < 2) && (param_1 + *(int *)(pcVar1 + -8) <= *(int *)(pcVar1 + -4)))
    {
      FID_conflict__memcpy(pcVar1 + *(int *)(pcVar1 + -8),param_2,param_1);
      *(int *)(*(int *)this + -8) = *(int *)(*(int *)this + -8) + param_1;
      *(undefined1 *)(*(int *)(*(int *)this + -8) + *(int *)this) = 0;
    }
    else {
      ConcatCopy(this,*(int *)(pcVar1 + -8),pcVar1,param_1,param_2);
      Release((CStringData *)(pcVar1 + -0xc));
    }
  }
  return;
}


