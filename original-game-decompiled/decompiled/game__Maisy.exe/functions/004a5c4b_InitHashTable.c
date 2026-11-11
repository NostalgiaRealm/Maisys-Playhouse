
/* ==== InitHashTable @ 004a5c4b ==== 
 * signature: undefined __thiscall InitHashTable(void * this, int param_1, int param_2)
 * body: 004a5c4b-004a5c99
 * note: Library Function - Multiple Matches With Same Base Name  public: void __thiscall CMapStringToOb::InitHashTable(unsigned int,int)  public: void __thiscall CMapStringToPtr::InitHashTable(unsigned int,int)  public: void __thiscall CMapStringToString::InitHashTable(unsigned int,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall CMapStringToOb::InitHashTable(unsigned int,int)
    public: void __thiscall CMapStringToPtr::InitHashTable(unsigned int,int)
    public: void __thiscall CMapStringToString::InitHashTable(unsigned int,int)
   
   Library: Visual Studio 1998 Release */

void __thiscall InitHashTable(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  void *_Dst;
  
  puVar1 = (undefined4 *)((int)this + 4);
  if ((LPVOID)*puVar1 != (LPVOID)0x0) {
    FUN_004a602d((LPVOID)*puVar1);
    *puVar1 = 0;
  }
  if (param_2 != 0) {
    _Dst = (void *)FUN_004a5fed(param_1 * 4);
    *puVar1 = _Dst;
    _memset(_Dst,0,param_1 * 4);
  }
  *(int *)((int)this + 8) = param_1;
  return;
}


