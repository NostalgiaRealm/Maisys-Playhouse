
/* ==== FUN_004ac7a7 @ 004ac7a7 ==== 
 * signature: CDialogTemplate * __thiscall FUN_004ac7a7(void * this, HGLOBAL param_1)
 * body: 004ac7a7-004ac7e9
 */

CDialogTemplate * __thiscall FUN_004ac7a7(void *this,HGLOBAL param_1)

{
  DLGTEMPLATE *pDVar1;
  uint uVar2;
  
  if (param_1 == (HGLOBAL)0x0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
  }
  else {
    pDVar1 = GlobalLock(param_1);
    uVar2 = CDialogTemplate::GetTemplateSize(pDVar1);
    CDialogTemplate::SetTemplate(this,pDVar1,uVar2);
    GlobalUnlock(param_1);
  }
  return this;
}


