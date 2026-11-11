
/* ==== CHandleMap::CHandleMap @ 004ae75c ==== 
 * signature: undefined __thiscall CHandleMap(CHandleMap * this, CRuntimeClass * param_1, uint param_2, int param_3)
 * body: 004ae75c-004ae7c4
 * note: Library Function - Single Match  public: __thiscall CHandleMap::CHandleMap(struct CRuntimeClass *,unsigned int,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CHandleMap::CHandleMap(struct CRuntimeClass *,unsigned int,int)
   
   Library: Visual Studio 1998 Release */

CMapPtrToPtr * __thiscall
CHandleMap::CHandleMap(CHandleMap *this,CRuntimeClass *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CMapPtrToPtr *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CMapPtrToPtr **)(unaff_EBP + -0x10) = this_00;
  CMapPtrToPtr::CMapPtrToPtr(this_00,10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  CMapPtrToPtr::CMapPtrToPtr(this_00 + 0x1c,4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  CMapPtrToPtr::InitHashTable(this_00 + 0x1c,7,0);
  uVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar2 = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(this_00 + 0x38) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(this_00 + 0x3c) = uVar1;
  *(undefined4 *)(this_00 + 0x40) = uVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this_00;
}


