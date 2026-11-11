
/* ==== CMapPtrToPtr::RemoveKey @ 004a5b16 ==== 
 * signature: int __thiscall RemoveKey(CMapPtrToPtr * this, void * param_1)
 * body: 004a5b16-004a5b5a
 * note: Library Function - Single Match  public: int __thiscall CMapPtrToPtr::RemoveKey(void *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CMapPtrToPtr::RemoveKey(void *)
   
   Library: Visual Studio 1998 Release */

int __thiscall CMapPtrToPtr::RemoveKey(CMapPtrToPtr *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)(this + 4) != 0) {
    puVar1 = (undefined4 *)(*(int *)(this + 4) + (((uint)param_1 >> 4) % *(uint *)(this + 8)) * 4);
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2
        ) {
      if ((void *)puVar2[2] == param_1) {
        *puVar1 = *puVar2;
        FreeAssoc(this,puVar2);
        return 1;
      }
      puVar1 = puVar2;
    }
  }
  return 0;
}


