
/* ==== FUN_004abc24 @ 004abc24 ==== 
 * signature: undefined __fastcall FUN_004abc24(CString * param_1)
 * body: 004abc24-004abc3d
 */

void __fastcall FUN_004abc24(CString *param_1)

{
  if (*(int *)(*(int *)param_1 + -0xc) < 0) {
    CString::operator=(param_1,&DAT_004dd6e8);
  }
  else {
    CString::Release(param_1);
  }
  return;
}


