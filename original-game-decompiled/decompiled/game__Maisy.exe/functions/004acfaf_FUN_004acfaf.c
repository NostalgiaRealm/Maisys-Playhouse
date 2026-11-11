
/* ==== FUN_004acfaf @ 004acfaf ==== 
 * signature: CString * __thiscall FUN_004acfaf(void * this, byte param_1)
 * body: 004acfaf-004acfec
 */

CString * __thiscall FUN_004acfaf(void *this,byte param_1)

{
  int *piVar1;
  
  if ((param_1 & 2) == 0) {
    CString::~CString(this);
    piVar1 = this;
    if ((param_1 & 1) == 0) {
      return this;
    }
  }
  else {
    _eh_vector_destructor_iterator_(this,4,*(int *)((int)this + -4),CString::~CString);
    piVar1 = (int *)((int)this + -4);
  }
  FUN_004a602d(piVar1);
  return this;
}


