
/* ==== FUN_004a4d8d @ 004a4d8d ==== 
 * signature: undefined __stdcall FUN_004a4d8d(CString * param_1, int param_2)
 * body: 004a4d8d-004a4db1
 */

void FUN_004a4d8d(CString *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    CString::~CString(param_1);
    param_1 = param_1 + 4;
  }
  return;
}


