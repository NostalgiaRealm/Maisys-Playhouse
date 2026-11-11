
/* ==== CString::Find @ 004a47e2 ==== 
 * signature: int __thiscall Find(CString * this, char * param_1)
 * body: 004a47e2-004a4803
 * note: Library Function - Single Match  public: int __thiscall CString::Find(char const *)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CString::Find(char const *)const 
   
   Library: Visual Studio 1998 Release */

int __thiscall CString::Find(CString *this,char *param_1)

{
  uchar *puVar1;
  int iVar2;
  
  puVar1 = __mbsstr(*(uchar **)this,(uchar *)param_1);
  if (puVar1 == (uchar *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)puVar1 - *(int *)this;
  }
  return iVar2;
}


