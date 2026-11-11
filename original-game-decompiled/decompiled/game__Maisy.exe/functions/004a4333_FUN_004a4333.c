
/* ==== FUN_004a4333 @ 004a4333 ==== 
 * signature: CString * __thiscall FUN_004a4333(void * this, char param_1, size_t param_2)
 * body: 004a4333-004a4368
 */

CString * __thiscall FUN_004a4333(void *this,char param_1,size_t param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = FUN_004abb3e();
  *(undefined **)this = *ppuVar1;
  if (0 < (int)param_2) {
    CString::AllocBuffer(this,param_2);
    _memset(*(void **)this,(int)param_1,param_2);
  }
  return this;
}


