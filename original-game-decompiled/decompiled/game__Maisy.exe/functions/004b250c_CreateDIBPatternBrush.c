
/* ==== CBrush::CreateDIBPatternBrush @ 004b250c ==== 
 * signature: int __thiscall CreateDIBPatternBrush(CBrush * this, void * param_1, uint param_2)
 * body: 004b250c-004b253d
 * note: Library Function - Single Match  public: int __thiscall CBrush::CreateDIBPatternBrush(void *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CBrush::CreateDIBPatternBrush(void *,unsigned int)
   
   Library: Visual Studio 1998 Release */

int __thiscall CBrush::CreateDIBPatternBrush(CBrush *this,void *param_1,uint param_2)

{
  bool bVar1;
  LPVOID lpPackedDIB;
  HBRUSH pHVar2;
  undefined3 extraout_var;
  
  lpPackedDIB = GlobalLock(param_1);
  pHVar2 = CreateDIBPatternBrushPt(lpPackedDIB,param_2);
  bVar1 = Attach(this,pHVar2);
  GlobalUnlock(param_1);
  return CONCAT31(extraout_var,bVar1);
}


