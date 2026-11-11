
/* ==== CDocument::GetFile @ 004b0441 ==== 
 * signature: CFile * __thiscall GetFile(CDocument * this, char * param_1, uint param_2, CFileException * param_3)
 * body: 004b0441-004b048c;004b04a0-004b04de
 * note: Library Function - Single Match  public: virtual class CFile * __thiscall CDocument::GetFile(char const *,unsigned int,class CFileException *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual class CFile * __thiscall CDocument::GetFile(char const *,unsigned int,class
   CFileException *)
   
   Library: Visual Studio 1998 Release */

CFile * __thiscall
CDocument::GetFile(CDocument *this,char *param_1,uint param_2,CFileException *param_3)

{
  int iVar1;
  CFile *pCVar2;
  int iVar3;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  pCVar2 = (CFile *)FUN_004a5fed(0x14);
  *(CFile **)(unaff_EBP + -0x10) = pCVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (pCVar2 == (CFile *)0x0) {
    pCVar2 = (CFile *)0x0;
  }
  else {
    FUN_004ad859();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004abb44((undefined4 *)(pCVar2 + 0x10));
    *(undefined1 *)(unaff_EBP + -4) = 2;
    *(undefined ***)pCVar2 = &PTR_FUN_004cc00c;
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = *(int *)pCVar2;
  iVar3 = (**(code **)(iVar1 + 0x28))
                    (*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                     *(undefined4 *)(unaff_EBP + 0x10));
  if (iVar3 == 0) {
    if (pCVar2 != (CFile *)0x0) {
      (**(code **)(iVar1 + 4))(1);
    }
    pCVar2 = (CFile *)0x0;
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return pCVar2;
}


