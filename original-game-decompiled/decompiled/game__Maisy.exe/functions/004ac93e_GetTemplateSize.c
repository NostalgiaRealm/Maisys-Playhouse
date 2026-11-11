
/* ==== CDialogTemplate::GetTemplateSize @ 004ac93e ==== 
 * signature: uint __cdecl GetTemplateSize(DLGTEMPLATE * param_1)
 * body: 004ac93e-004ac9f0
 * note: Library Function - Single Match  protected: static unsigned int __cdecl CDialogTemplate::GetTemplateSize(struct DLGTEMPLATE const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: static unsigned int __cdecl CDialogTemplate::GetTemplateSize(struct DLGTEMPLATE const
   *)
   
   Library: Visual Studio 1998 Release */

uint __cdecl CDialogTemplate::GetTemplateSize(DLGTEMPLATE *param_1)

{
  ushort uVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  ushort *puVar6;
  ushort *puVar7;
  bool bVar8;
  
  bVar8 = *(short *)((int)&param_1->style + 2) != -1;
  psVar2 = (short *)GetFontSizeField(param_1);
  if (*(short *)((int)&param_1->style + 2) == -1) {
    uVar3._0_2_ = param_1->y;
    uVar3._2_2_ = param_1->cx;
  }
  else {
    uVar3 = param_1->style;
  }
  if ((uVar3 & 0x40) != 0) {
    iVar4 = FUN_00492020(psVar2 + (-(uint)bVar8 & 0xfffffffe) + 3);
    psVar2 = psVar2 + (-(uint)bVar8 & 0xfffffffe) + 3 + iVar4 + 1;
  }
  if (bVar8) {
    cVar5 = (char)param_1->cdit;
  }
  else {
    cVar5 = (char)param_1->cy;
  }
  if (cVar5 != '\0') {
    do {
      puVar6 = (ushort *)(((int)psVar2 + 3U & 0xfffffffc) + (-(uint)bVar8 & 0xfffffffa) + 0x18);
      if (*puVar6 == 0xffff) {
        puVar7 = puVar6 + 2;
      }
      else {
        do {
          puVar7 = puVar6 + 1;
          uVar1 = *puVar6;
          puVar6 = puVar7;
        } while (uVar1 != 0);
      }
      if (*puVar7 == 0xffff) {
        puVar6 = puVar7 + 2;
      }
      else {
        do {
          puVar6 = puVar7 + 1;
          uVar1 = *puVar7;
          puVar7 = puVar6;
        } while (uVar1 != 0);
      }
      psVar2 = (short *)((int)puVar6 + *puVar6 + 2);
      cVar5 = cVar5 + -1;
    } while (cVar5 != '\0');
  }
  return (int)psVar2 - (int)param_1;
}


