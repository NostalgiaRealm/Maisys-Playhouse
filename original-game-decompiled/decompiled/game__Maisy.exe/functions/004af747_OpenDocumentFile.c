
/* ==== CMultiDocTemplate::OpenDocumentFile @ 004af747 ==== 
 * signature: CDocument * __thiscall OpenDocumentFile(CMultiDocTemplate * this, char * param_1, int param_2)
 * body: 004af747-004af880
 * note: Library Function - Single Match  public: virtual class CDocument * __thiscall CMultiDocTemplate::OpenDocumentFile(char const *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual class CDocument * __thiscall CMultiDocTemplate::OpenDocumentFile(char const
   *,int)
   
   Library: Visual Studio 1998 Release */

CDocument * __thiscall
CMultiDocTemplate::OpenDocumentFile(CMultiDocTemplate *this,char *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  CDocument *pCVar4;
  int iVar5;
  int iVar6;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar7;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(int **)(unaff_EBP + -0x18) = extraout_ECX;
  iVar3 = (**(code **)(*extraout_ECX + 0x70))();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  if (iVar3 == 0) {
    AfxMessageBox(0xf104,0,0xffffffff);
  }
  else {
    puVar7 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x48);
    uVar1 = *puVar7;
    piVar2 = *(int **)(unaff_EBP + -0x18);
    *puVar7 = 0;
    iVar3 = (**(code **)(*piVar2 + 0x74))(*(undefined4 *)(unaff_EBP + -0x14),0);
    *(int *)(unaff_EBP + -0x1c) = iVar3;
    *puVar7 = uVar1;
    if (iVar3 == 0) {
      AfxMessageBox(0xf104,0,0xffffffff);
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 4))(1);
      }
    }
    else {
      iVar3 = *(int *)(unaff_EBP + 8);
      if (iVar3 == 0) {
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 0x88))(*(undefined4 *)(unaff_EBP + -0x14));
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x4c) = 1;
        }
        iVar3 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x74))();
        if (iVar3 != 0) {
          piVar2 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x88);
          *piVar2 = *piVar2 + 1;
LAB_004af868:
          (**(code **)(**(int **)(unaff_EBP + -0x18) + 0x78))
                    (*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x14),
                     *(undefined4 *)(unaff_EBP + 0xc));
          pCVar4 = *(CDocument **)(unaff_EBP + -0x14);
          goto LAB_004af776;
        }
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0x5c))();
      }
      else {
        iVar5 = FUN_004bafca();
        CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(iVar5 + 4));
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iVar5 = **(int **)(unaff_EBP + -0x14);
        iVar6 = (**(code **)(iVar5 + 0x78))(iVar3);
        if (iVar6 != 0) {
          (**(code **)(iVar5 + 0x58))(iVar3,1);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_004af88b();
          goto LAB_004af868;
        }
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0x5c))();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004af88b();
      }
    }
  }
  pCVar4 = (CDocument *)0x0;
LAB_004af776:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return pCVar4;
}


