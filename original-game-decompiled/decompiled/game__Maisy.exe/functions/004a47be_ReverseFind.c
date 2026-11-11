
/* ==== CString::ReverseFind @ 004a47be ==== 
 * signature: int __thiscall ReverseFind(CString * this, char param_1)
 * body: 004a47be-004a47e1
 * note: Library Function - Single Match  public: int __thiscall CString::ReverseFind(char)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CString::ReverseFind(char)const 
   
   Library: Visual Studio 1998 Release */

int __thiscall CString::ReverseFind(CString *this,char param_1)

{
  uchar *puVar1;
  int iVar2;
  
  puVar1 = __mbsrchr(*(uchar **)this,(uint)(byte)param_1);
  if (puVar1 == (uchar *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)puVar1 - *(int *)this;
  }
  return iVar2;
}


