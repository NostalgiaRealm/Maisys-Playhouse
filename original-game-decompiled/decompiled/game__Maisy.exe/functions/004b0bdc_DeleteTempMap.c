
/* ==== CWnd::DeleteTempMap @ 004b0bdc ==== 
 * signature: void __stdcall DeleteTempMap(void)
 * body: 004b0bdc-004b0bf1
 * note: Library Function - Single Match  public: static void __stdcall CWnd::DeleteTempMap(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static void __stdcall CWnd::DeleteTempMap(void)
   
   Library: Visual Studio 1998 Release */

void CWnd::DeleteTempMap(void)

{
  CHandleMap *this;
  
  this = afxMapHWND(0);
  if (this != (CHandleMap *)0x0) {
    CHandleMap::DeleteTemp(this);
    return;
  }
  return;
}


