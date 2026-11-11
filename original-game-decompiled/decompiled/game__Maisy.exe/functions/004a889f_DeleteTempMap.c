
/* ==== DeleteTempMap @ 004a889f ==== 
 * signature: undefined __stdcall DeleteTempMap(void)
 * body: 004a889f-004a88b4
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
  
  this = (CHandleMap *)FID_conflict_afxMapHGDIOBJ();
  if (this != (CHandleMap *)0x0) {
    CHandleMap::DeleteTemp(this);
    return;
  }
  return;
}


