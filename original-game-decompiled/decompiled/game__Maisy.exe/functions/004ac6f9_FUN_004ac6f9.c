
/* ==== FUN_004ac6f9 @ 004ac6f9 ==== 
 * signature: bool __thiscall FUN_004ac6f9(void * this, void * param_1)
 * body: 004ac6f9-004ac72a
 */

bool __thiscall FUN_004ac6f9(void *this,void *param_1)

{
  CHandleMap *this_00;
  CAssoc *pCVar1;
  
  if (param_1 != (void *)0x0) {
    this_00 = afxMapHIMAGELIST(1);
    *(void **)((int)this + 4) = param_1;
    pCVar1 = FUN_004a5ab8(this_00,param_1);
    *(void **)pCVar1 = this;
  }
  return param_1 != (void *)0x0;
}


