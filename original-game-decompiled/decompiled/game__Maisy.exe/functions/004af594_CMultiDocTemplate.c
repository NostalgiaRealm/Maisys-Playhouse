
/* ==== CMultiDocTemplate::CMultiDocTemplate @ 004af594 ==== 
 * signature: undefined __thiscall CMultiDocTemplate(CMultiDocTemplate * this, uint param_1, CRuntimeClass * param_2, CRuntimeClass * param_3, CRuntimeClass * param_4)
 * body: 004af594-004af607
 * note: Library Function - Single Match  public: __thiscall CMultiDocTemplate::CMultiDocTemplate(unsigned int,struct CRuntimeClass *,struct CRuntimeClass *,struct CRuntimeClass *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CMultiDocTemplate::CMultiDocTemplate(unsigned int,struct CRuntimeClass
   *,struct CRuntimeClass *,struct CRuntimeClass *)
   
   Library: Visual Studio 1998 Release */

CDocTemplate * __thiscall
CMultiDocTemplate::CMultiDocTemplate
          (CMultiDocTemplate *this,uint param_1,CRuntimeClass *param_2,CRuntimeClass *param_3,
          CRuntimeClass *param_4)

{
  CDocTemplate *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CDocTemplate **)(unaff_EBP + -0x10) = this_00;
  CDocTemplate::CDocTemplate
            (this_00,*(uint *)(unaff_EBP + 8),*(CRuntimeClass **)(unaff_EBP + 0xc),
             *(CRuntimeClass **)(unaff_EBP + 0x10),*(CRuntimeClass **)(unaff_EBP + 0x14));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  CPtrList::CPtrList((CPtrList *)(this_00 + 0x6c),10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined ***)this_00 = &PTR_FUN_004cb31c;
  *(undefined4 *)(this_00 + 100) = 0;
  *(undefined4 *)(this_00 + 0x68) = 0;
  *(undefined4 *)(this_00 + 0x88) = 0;
  if (DAT_004dd430 == 0) {
    LoadTemplate((CMultiDocTemplate *)this_00);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this_00;
}


