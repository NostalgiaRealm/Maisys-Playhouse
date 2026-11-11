
/* ==== CGdiObject::FromHandle @ 004b21db ==== 
 * signature: CGdiObject * __stdcall FromHandle(void * param_1)
 * body: 004b21db-004b21f2
 * note: Library Function - Single Match  public: static class CGdiObject * __stdcall CGdiObject::FromHandle(void *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static class CGdiObject * __stdcall CGdiObject::FromHandle(void *)
   
   Library: Visual Studio 1998 Release */

CGdiObject * CGdiObject::FromHandle(void *param_1)

{
  CHandleMap *this;
  CObject *pCVar1;
  
  this = afxMapHIMAGELIST(1);
  pCVar1 = FUN_004ae7e2(this,param_1);
  return (CGdiObject *)pCVar1;
}


