
/* ==== CString::FindOneOf @ 004ac288 ==== 
 * signature: int __thiscall FindOneOf(CString * this, char * param_1)
 * body: 004ac288-004ac2a9
 * note: Library Function - Single Match  public: int __thiscall CString::FindOneOf(char const *)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CString::FindOneOf(char const *)const 
   
   Library: Visual Studio 1998 Release */

int __thiscall CString::FindOneOf(CString *this,char *param_1)

{
  uchar *puVar1;
  int iVar2;
  
  puVar1 = __mbspbrk(*(uchar **)this,(uchar *)param_1);
  if (puVar1 == (uchar *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)puVar1 - *(int *)this;
  }
  return iVar2;
}


