
/* ==== CDialogTemplate::SetTemplate @ 004ac7ea ==== 
 * signature: int __thiscall SetTemplate(CDialogTemplate * this, DLGTEMPLATE * param_1, uint param_2)
 * body: 004ac7ea-004ac851
 * note: Library Function - Single Match  protected: int __thiscall CDialogTemplate::SetTemplate(struct DLGTEMPLATE const *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: int __thiscall CDialogTemplate::SetTemplate(struct DLGTEMPLATE const *,unsigned int)
   
   Library: Visual Studio 1998 Release */

int __thiscall CDialogTemplate::SetTemplate(CDialogTemplate *this,DLGTEMPLATE *param_1,uint param_2)

{
  HGLOBAL hMem;
  int iVar1;
  uint *_Dst;
  uint uVar2;
  
  *(uint *)(this + 4) = param_2;
  hMem = GlobalAlloc(0x40,param_2 + 0x40);
  *(HGLOBAL *)this = hMem;
  if (hMem == (HGLOBAL)0x0) {
    iVar1 = 0;
  }
  else {
    _Dst = GlobalLock(hMem);
    FID_conflict__memcpy(_Dst,param_1,*(size_t *)(this + 4));
    if (*(short *)((int)_Dst + 2) == -1) {
      uVar2 = _Dst[3];
    }
    else {
      uVar2 = *_Dst;
    }
    *(uint *)(this + 8) = (uint)((uVar2 & 0x40) == 0);
    GlobalUnlock(*(HGLOBAL *)this);
    iVar1 = 1;
  }
  return iVar1;
}


