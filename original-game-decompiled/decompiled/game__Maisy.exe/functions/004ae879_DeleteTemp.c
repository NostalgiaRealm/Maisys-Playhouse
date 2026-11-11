
/* ==== CHandleMap::DeleteTemp @ 004ae879 ==== 
 * signature: void __thiscall DeleteTemp(CHandleMap * this)
 * body: 004ae879-004ae8df
 * note: Library Function - Single Match  public: void __thiscall CHandleMap::DeleteTemp(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CHandleMap::DeleteTemp(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CHandleMap::DeleteTemp(CHandleMap *this)

{
  int iVar1;
  int local_10;
  int *local_c;
  int local_8;
  
  local_8 = (*(int *)(this + 0x28) == 0) - 1;
  if (local_8 != 0) {
    do {
      FUN_004a5b5b(this + 0x1c,&local_8,&local_10,(int *)&local_c);
      iVar1 = *(int *)(this + 0x3c);
      *(undefined4 *)(iVar1 + (int)local_c) = 0;
      if (*(int *)(this + 0x40) == 2) {
        ((undefined4 *)(iVar1 + (int)local_c))[1] = 0;
      }
      if (local_c != (int *)0x0) {
        (**(code **)(*local_c + 4))(1);
      }
    } while (local_8 != 0);
  }
  CMapPtrToPtr::RemoveAll((CMapPtrToPtr *)(this + 0x1c));
  return;
}


