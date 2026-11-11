
/* ==== CDocTemplate::CDocTemplate @ 004b3182 ==== 
 * signature: undefined __thiscall CDocTemplate(CDocTemplate * this, uint param_1, CRuntimeClass * param_2, CRuntimeClass * param_3, CRuntimeClass * param_4)
 * body: 004b3182-004b325c;004b3266-004b327e;004b3288-004b32b1
 * note: Library Function - Single Match  protected: __thiscall CDocTemplate::CDocTemplate(unsigned int,struct CRuntimeClass *,struct CRuntimeClass *,struct CRuntimeClass *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: __thiscall CDocTemplate::CDocTemplate(unsigned int,struct CRuntimeClass *,struct
   CRuntimeClass *,struct CRuntimeClass *)
   
   Library: Visual Studio 1998 Release */

CCmdTarget * __thiscall
CDocTemplate::CDocTemplate
          (CDocTemplate *this,uint param_1,CRuntimeClass *param_2,CRuntimeClass *param_3,
          CRuntimeClass *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CPtrList *this_00;
  void *pvVar4;
  CDocManager *this_01;
  CCmdTarget *this_02;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CCmdTarget **)(unaff_EBP + -0x14) = this_02;
  CCmdTarget::CCmdTarget(this_02);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004abb44((undefined4 *)(this_02 + 0x60));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined ***)this_02 = &PTR_FUN_004cd5b4;
  uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(this_02 + 0x3c) = uVar1;
  uVar1 = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(this_02 + 0x40) = 0;
  uVar3 = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined4 *)(this_02 + 0x44) = 0;
  *(undefined4 *)(this_02 + 0x48) = 0;
  *(undefined4 *)(this_02 + 0x4c) = uVar2;
  *(undefined4 *)(this_02 + 0x50) = uVar1;
  *(undefined4 *)(this_02 + 0x54) = uVar3;
  *(undefined4 *)(this_02 + 0x58) = 0;
  *(undefined4 *)(this_02 + 0x5c) = 0;
  *(undefined4 *)(this_02 + 0x20) = 0;
  *(undefined4 *)(this_02 + 0x24) = 0;
  *(undefined4 *)(this_02 + 0x28) = 0;
  *(undefined4 *)(this_02 + 0x2c) = 0;
  *(undefined4 *)(this_02 + 0x30) = 0;
  *(undefined4 *)(this_02 + 0x34) = 0;
  *(undefined4 *)(this_02 + 0x38) = 0;
  if (DAT_004dd430 == 0) {
    *(undefined4 *)(this_02 + 0x1c) = 1;
    LoadTemplate((CDocTemplate *)this_02);
  }
  else {
    *(undefined4 *)(this_02 + 0x1c) = 0;
    if (DAT_004dd438 == (void *)0x0) {
      this_00 = (CPtrList *)FUN_004a5fed(0x1c);
      *(CPtrList **)(unaff_EBP + -0x10) = this_00;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      pvVar4 = (void *)0x0;
      if (this_00 != (CPtrList *)0x0) {
        pvVar4 = (void *)CPtrList::CPtrList(this_00,10);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      DAT_004dd438 = pvVar4;
    }
    if (DAT_004dd434 == 0) {
      this_01 = (CDocManager *)FUN_004a5fed(0x20);
      *(CDocManager **)(unaff_EBP + -0x10) = this_01;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (this_01 == (CDocManager *)0x0) {
        DAT_004dd434 = 0;
      }
      else {
        DAT_004dd434 = CDocManager::CDocManager(this_01);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    FUN_004a564c(DAT_004dd438,this_02);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this_02;
}


