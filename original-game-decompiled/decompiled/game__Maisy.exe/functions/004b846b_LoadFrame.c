
/* ==== CFrameWnd::LoadFrame @ 004b846b ==== 
 * signature: int __thiscall LoadFrame(CFrameWnd * this, uint param_1, ulong param_2, CWnd * param_3, CCreateContext * param_4)
 * body: 004b846b-004b8562
 * note: Library Function - Single Match  public: virtual int __thiscall CFrameWnd::LoadFrame(unsigned int,unsigned long,class CWnd *,struct CCreateContext *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CFrameWnd::LoadFrame(unsigned int,unsigned long,class CWnd
   *,struct CCreateContext *)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CFrameWnd::LoadFrame
          (CFrameWnd *this,uint param_1,ulong param_2,CWnd *param_3,CCreateContext *param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  HMENU pHVar6;
  CFrameWnd *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  uVar1 = *(uint *)(unaff_EBP + 8);
  *(uint *)(this_00 + 0x8c) = uVar1;
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = CString::LoadStringA((CString *)(unaff_EBP + -0x10),uVar1);
  if (iVar3 != 0) {
    AfxExtractSubString((CString *)(this_00 + 0xac),*(char **)(unaff_EBP + -0x10),0,'\n');
  }
  iVar3 = FUN_004bafca();
  iVar4 = 1;
  if ((*(byte *)(iVar3 + 0x18) & 8) == 0) {
    iVar4 = FUN_004ab920(8);
  }
  if (iVar4 != 0) {
    pcVar5 = FUN_004b83e6(this_00,*(undefined4 *)(unaff_EBP + 0xc),(ushort)uVar1);
    pvVar2 = *(void **)(unaff_EBP + 0x14);
    iVar3 = FUN_004b8240(this_00,pcVar5,*(char **)(this_00 + 0xac),*(ulong *)(unaff_EBP + 0xc),
                         (int *)&DAT_004e50d8,*(int *)(unaff_EBP + 0x10),(char *)(uVar1 & 0xffff),0,
                         pvVar2);
    if (iVar3 != 0) {
      pHVar6 = GetMenu(*(HWND *)(this_00 + 0x1c));
      *(HMENU *)(this_00 + 0x44) = pHVar6;
      LoadAccelTable(this_00,(char *)(uVar1 & 0xffff));
      if (pvVar2 == (void *)0x0) {
        CWnd::SendMessageToDescendants(*(HWND__ **)(this_00 + 0x1c),0x364,0,0,1,1);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004b856d();
      iVar3 = 1;
      goto LAB_004b84db;
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b856d();
  iVar3 = 0;
LAB_004b84db:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return iVar3;
}


