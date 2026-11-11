
/* ==== CDialogTemplate::GetSizeInPixels @ 004accbf ==== 
 * signature: void __thiscall GetSizeInPixels(CDialogTemplate * this, tagSIZE * param_1)
 * body: 004accbf-004acd6c
 * note: Library Function - Single Match  public: void __thiscall CDialogTemplate::GetSizeInPixels(struct tagSIZE *)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CDialogTemplate::GetSizeInPixels(struct tagSIZE *)const 
   
   Library: Visual Studio 1998 Release */

void __thiscall CDialogTemplate::GetSizeInPixels(CDialogTemplate *this,tagSIZE *param_1)

{
  tagSIZE *ptVar1;
  uint uVar2;
  int iVar3;
  CDialogTemplate *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  if (*(int *)(this_00 + 8) == 0) {
    FUN_004abb44((undefined4 *)(unaff_EBP + -0x14));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    GetFont(this_00,(CString *)(unaff_EBP + -0x14),(ushort *)(unaff_EBP + -0xe));
    GetSizeInDialogUnits(this_00,(tagSIZE *)(unaff_EBP + -0x1c));
    FUN_004acd7f(*(LPCSTR *)(unaff_EBP + -0x14),(ushort)*(undefined4 *)(unaff_EBP + -0xe),
                 *(int *)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x18),*(int **)(unaff_EBP + 8));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004acd77();
  }
  else {
    ptVar1 = *(tagSIZE **)(unaff_EBP + 8);
    GetSizeInDialogUnits(this_00,ptVar1);
    uVar2 = GetDialogBaseUnits();
    iVar3 = (uVar2 & 0xffff) * ptVar1->cx;
    ptVar1->cx = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
    iVar3 = (uVar2 >> 0x10) * ptVar1->cy;
    ptVar1->cy = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


