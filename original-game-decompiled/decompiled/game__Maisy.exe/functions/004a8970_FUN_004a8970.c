
/* ==== FUN_004a8970 @ 004a8970 ==== 
 * signature: void * __stdcall FUN_004a8970(void * param_1)
 * body: 004a8970-004a89a0
 */

void * FUN_004a8970(void *param_1)

{
  CMapPtrToPtr *this;
  void *local_8;
  
  this = (CMapPtrToPtr *)FID_conflict_afxMapHGDIOBJ();
  local_8 = (void *)0x0;
  if (this != (CMapPtrToPtr *)0x0) {
    CMapPtrToPtr::Lookup(this,param_1,&local_8);
  }
  return local_8;
}


