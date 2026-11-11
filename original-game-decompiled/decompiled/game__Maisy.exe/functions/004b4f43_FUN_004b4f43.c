
/* ==== FUN_004b4f43 @ 004b4f43 ==== 
 * signature: undefined __stdcall FUN_004b4f43(CDataExchange * param_1, int param_2, int param_3, int param_4)
 * body: 004b4f43-004b4f70
 */

void FUN_004b4f43(CDataExchange *param_1,int param_2,int param_3,int param_4)

{
  if ((param_2 < param_3) || (param_4 < param_2)) {
    FailMinMaxWithFormat(param_1,param_3,param_4,&DAT_004db52c,0xf112);
  }
  return;
}


