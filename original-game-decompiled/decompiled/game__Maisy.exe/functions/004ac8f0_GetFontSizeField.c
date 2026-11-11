
/* ==== CDialogTemplate::GetFontSizeField @ 004ac8f0 ==== 
 * signature: uchar * __cdecl GetFontSizeField(DLGTEMPLATE * param_1)
 * body: 004ac8f0-004ac93d
 * note: Library Function - Single Match  protected: static unsigned char * __cdecl CDialogTemplate::GetFontSizeField(struct DLGTEMPLATE const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: static unsigned char * __cdecl CDialogTemplate::GetFontSizeField(struct DLGTEMPLATE
   const *)
   
   Library: Visual Studio 1998 Release */

uchar * __cdecl CDialogTemplate::GetFontSizeField(DLGTEMPLATE *param_1)

{
  DWORD *pDVar1;
  DLGTEMPLATE *pDVar2;
  DLGTEMPLATE *pDVar3;
  
  if (*(short *)((int)&param_1->style + 2) == -1) {
    pDVar3 = (DLGTEMPLATE *)&param_1[1].cdit;
  }
  else {
    pDVar3 = param_1 + 1;
  }
  if ((WORD)pDVar3->style == 0xffff) {
    pDVar2 = (DLGTEMPLATE *)&pDVar3->dwExtendedStyle;
  }
  else {
    do {
      pDVar2 = (DLGTEMPLATE *)((int)&pDVar3->style + 2);
      pDVar1 = &pDVar3->style;
      pDVar3 = pDVar2;
    } while ((WORD)*pDVar1 != 0);
  }
  if ((WORD)pDVar2->style == 0xffff) {
    pDVar3 = (DLGTEMPLATE *)&pDVar2->dwExtendedStyle;
  }
  else {
    do {
      pDVar3 = (DLGTEMPLATE *)((int)&pDVar2->style + 2);
      pDVar1 = &pDVar2->style;
      pDVar2 = pDVar3;
    } while ((WORD)*pDVar1 != 0);
  }
  do {
    pDVar2 = (DLGTEMPLATE *)((int)&pDVar3->style + 2);
    pDVar1 = &pDVar3->style;
    pDVar3 = pDVar2;
  } while ((WORD)*pDVar1 != 0);
  return (uchar *)pDVar2;
}


