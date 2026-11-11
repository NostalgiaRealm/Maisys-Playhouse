
/* ==== CMapPtrToPtr::InitHashTable @ 004a5924 ==== 
 * signature: void __thiscall InitHashTable(CMapPtrToPtr * this, uint param_1, int param_2)
 * body: 004a5924-004a5972
 * note: Library Function - Single Match  public: void __thiscall CMapPtrToPtr::InitHashTable(unsigned int,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CMapPtrToPtr::InitHashTable(unsigned int,int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CMapPtrToPtr::InitHashTable(CMapPtrToPtr *this,uint param_1,int param_2)

{
  CMapPtrToPtr *pCVar1;
  void *_Dst;
  
  pCVar1 = this + 4;
  if (*(LPVOID *)pCVar1 != (LPVOID)0x0) {
    FUN_004a602d(*(LPVOID *)pCVar1);
    *(undefined4 *)pCVar1 = 0;
  }
  if (param_2 != 0) {
    _Dst = (void *)FUN_004a5fed(param_1 * 4);
    *(void **)pCVar1 = _Dst;
    _memset(_Dst,0,param_1 * 4);
  }
  *(uint *)(this + 8) = param_1;
  return;
}


