
/* ==== FUN_004a4f90 @ 004a4f90 ==== 
 * signature: tm * __thiscall FUN_004a4f90(void * this, tm * param_1)
 * body: 004a4f90-004a4fc0
 */

tm * __thiscall FUN_004a4f90(void *this,tm *param_1)

{
  tm *ptVar1;
  int iVar2;
  tm *ptVar3;
  
  if (param_1 == (tm *)0x0) {
    param_1 = _gmtime(this);
  }
  else {
    ptVar1 = _gmtime(this);
    ptVar3 = param_1;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      ptVar3->tm_sec = ptVar1->tm_sec;
      ptVar1 = (tm *)&ptVar1->tm_min;
      ptVar3 = (tm *)&ptVar3->tm_min;
    }
  }
  return param_1;
}


