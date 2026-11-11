
/* ==== FUN_004ac207 @ 004ac207 ==== 
 * signature: undefined __fastcall FUN_004ac207(CString * param_1)
 * body: 004ac207-004ac237
 */

void __fastcall FUN_004ac207(CString *param_1)

{
  void *_Src;
  
  _Src = *(void **)param_1;
  if (*(int *)((int)_Src + -4) != *(int *)((int)_Src + -8)) {
    CString::AllocBuffer(param_1,*(int *)((int)_Src + -8));
    FID_conflict__memcpy(*(void **)param_1,_Src,*(size_t *)((int)_Src + -8));
    CString::Release((CStringData *)((int)_Src + -0xc));
  }
  return;
}


