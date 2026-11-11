
/* ==== DeleteTempMap @ 004ac609 ==== 
 * signature: undefined __stdcall DeleteTempMap(void)
 * body: 004ac609-004ac61e
 * note: Library Function - Multiple Matches With Same Base Name  public: static void __stdcall CDC::DeleteTempMap(void)  public: static void __stdcall CGdiObject::DeleteTempMap(void)  public: static void __stdcall CImageList::DeleteTempMap(void)  public: static void __stdcall CMenu::DeleteTempMap(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    public: static void __stdcall CDC::DeleteTempMap(void)
    public: static void __stdcall CGdiObject::DeleteTempMap(void)
    public: static void __stdcall CImageList::DeleteTempMap(void)
    public: static void __stdcall CMenu::DeleteTempMap(void)
   
   Library: Visual Studio 1998 Release */

void DeleteTempMap(void)

{
  CHandleMap *this;
  
  this = afxMapHIMAGELIST(0);
  if (this != (CHandleMap *)0x0) {
    CHandleMap::DeleteTemp(this);
    return;
  }
  return;
}


