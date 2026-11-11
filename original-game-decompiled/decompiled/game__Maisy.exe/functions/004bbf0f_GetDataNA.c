
/* ==== CThreadLocalObject::GetDataNA @ 004bbf0f ==== 
 * signature: CNoTrackObject * __thiscall GetDataNA(CThreadLocalObject * this)
 * body: 004bbf0f-004bbf40
 * note: Library Function - Single Match  public: class CNoTrackObject * __thiscall CThreadLocalObject::GetDataNA(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CNoTrackObject * __thiscall CThreadLocalObject::GetDataNA(void)
   
   Library: Visual Studio 1998 Release */

CNoTrackObject * __thiscall CThreadLocalObject::GetDataNA(CThreadLocalObject *this)

{
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)this;
  if ((((iVar1 != 0) && (DAT_004e5100 != (DWORD *)0x0)) &&
      (pvVar2 = TlsGetValue(*DAT_004e5100), pvVar2 != (LPVOID)0x0)) &&
     (iVar1 < *(int *)((int)pvVar2 + 8))) {
    return *(CNoTrackObject **)(*(int *)((int)pvVar2 + 0xc) + iVar1 * 4);
  }
  return (CNoTrackObject *)0x0;
}


