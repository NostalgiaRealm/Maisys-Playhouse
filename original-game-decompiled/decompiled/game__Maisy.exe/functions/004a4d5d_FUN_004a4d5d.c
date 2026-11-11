
/* ==== FUN_004a4d5d @ 004a4d5d ==== 
 * signature: undefined __stdcall FUN_004a4d5d(void * param_1, int param_2)
 * body: 004a4d5d-004a4d8c
 */

void FUN_004a4d5d(void *param_1,int param_2)

{
  undefined **_Src;
  size_t _Size;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    _Size = 4;
    _Src = FUN_004abb3e();
    FID_conflict__memcpy(param_1,_Src,_Size);
    param_1 = (void *)((int)param_1 + 4);
  }
  return;
}


