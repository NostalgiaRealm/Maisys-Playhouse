
/* ==== FUN_004ac6c8 @ 004ac6c8 ==== 
 * signature: void * __stdcall FUN_004ac6c8(void * param_1)
 * body: 004ac6c8-004ac6f8
 */

void * FUN_004ac6c8(void *param_1)

{
  CHandleMap *this;
  void *local_8;
  
  this = afxMapHIMAGELIST(0);
  local_8 = (void *)0x0;
  if (this != (CHandleMap *)0x0) {
    CMapPtrToPtr::Lookup((CMapPtrToPtr *)this,param_1,&local_8);
  }
  return local_8;
}


