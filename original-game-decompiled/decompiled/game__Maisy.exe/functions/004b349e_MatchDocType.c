
/* ==== CDocTemplate::MatchDocType @ 004b349e ==== 
 * signature: Confidence __thiscall MatchDocType(CDocTemplate * this, char * param_1, CDocument * * param_2)
 * body: 004b349e-004b3566
 * note: Library Function - Single Match  public: virtual enum CDocTemplate::Confidence __thiscall CDocTemplate::MatchDocType(char const *,class CDocument * &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual enum CDocTemplate::Confidence __thiscall CDocTemplate::MatchDocType(char const
   *,class CDocument * &)
   
   Library: Visual Studio 1998 Release */

Confidence __thiscall
CDocTemplate::MatchDocType(CDocTemplate *this,char *param_1,CDocument **param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  Confidence CVar4;
  int iVar5;
  uchar *lpString1;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  **(undefined4 **)(unaff_EBP + 0xc) = 0;
  iVar5 = *extraout_ECX;
  uVar1 = (**(code **)(iVar5 + 0x58))();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  do {
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar5 = (**(code **)(iVar5 + 0x68))(unaff_EBP + -0x10,4);
      if ((iVar5 != 0) && (*(int *)(*(int *)(unaff_EBP + -0x10) + -8) != 0)) {
        lpString1 = __mbsrchr(*(uchar **)(unaff_EBP + 8),0x2e);
        if (lpString1 != (uchar *)0x0) {
          iVar5 = lstrcmpiA((LPCSTR)lpString1,*(LPCSTR *)(unaff_EBP + -0x10));
          if (iVar5 == 0) {
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            FUN_004b3571();
            CVar4 = 4;
            goto LAB_004b34eb;
          }
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004b3571();
      CVar4 = 3;
      goto LAB_004b34eb;
    }
    iVar2 = (**(code **)(iVar5 + 0x5c))(unaff_EBP + -0x14);
    iVar3 = AfxComparePath(*(char **)(iVar2 + 0x20),*(char **)(unaff_EBP + 8));
  } while (iVar3 == 0);
  **(int **)(unaff_EBP + 0xc) = iVar2;
  CVar4 = 5;
LAB_004b34eb:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return CVar4;
}


