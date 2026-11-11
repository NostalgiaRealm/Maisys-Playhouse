
/* ==== DeleteTempMap @ 004b2134 ==== 
 * signature: undefined __stdcall DeleteTempMap(void)
 * body: 004b2134-004b2149
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


