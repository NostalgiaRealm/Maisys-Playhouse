
/* ==== CMDIChildWnd::LoadFrame @ 004b717f ==== 
 * signature: int __thiscall LoadFrame(CMDIChildWnd * this, uint param_1, ulong param_2, CWnd * param_3, CCreateContext * param_4)
 * body: 004b717f-004b725e
 * note: Library Function - Single Match  public: virtual int __thiscall CMDIChildWnd::LoadFrame(unsigned int,unsigned long,class CWnd *,struct CCreateContext *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CMDIChildWnd::LoadFrame(unsigned int,unsigned long,class CWnd
   *,struct CCreateContext *)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CMDIChildWnd::LoadFrame
          (CMDIChildWnd *this,uint param_1,ulong param_2,CWnd *param_3,CCreateContext *param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  
  FUN_004919ec();
  *(byte *)(unaff_EBP + 0xf) = *(byte *)(unaff_EBP + 0xf) | 0x40;
  this_00[0x23] = *(int *)(unaff_EBP + 8);
  iVar3 = *(int *)(unaff_EBP + 0x14);
  if ((iVar3 != 0) && (iVar1 = *(int *)(iVar3 + 8), iVar1 != 0)) {
    this_00[0x2f] = *(int *)(iVar1 + 100);
    this_00[0x12] = *(int *)(iVar1 + 0x68);
  }
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x14));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar1 = CString::LoadStringA((CString *)(unaff_EBP + -0x10),*(uint *)(unaff_EBP + 8));
  if (iVar1 != 0) {
    AfxExtractSubString((CString *)(unaff_EBP + -0x14),*(char **)(unaff_EBP + -0x10),0,'\n');
  }
  uVar7 = *(undefined4 *)(unaff_EBP + 0x10);
  puVar6 = &DAT_004e50d8;
  uVar5 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
  pcVar2 = FUN_004b83e6(this_00,*(undefined4 *)(unaff_EBP + 0xc),
                        (ushort)*(undefined4 *)(unaff_EBP + 8));
  iVar3 = (**(code **)(*this_00 + 0xf8))(pcVar2,uVar4,uVar5,puVar6,uVar7,iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (iVar3 != 0) {
    FUN_004b725f();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004b7271();
  }
  else {
    FUN_004b725f();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004b7271();
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return (uint)(iVar3 != 0);
}


