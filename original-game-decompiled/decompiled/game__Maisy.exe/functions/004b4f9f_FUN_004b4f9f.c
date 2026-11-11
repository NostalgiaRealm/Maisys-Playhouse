
/* ==== FUN_004b4f9f @ 004b4f9f ==== 
 * signature: undefined __stdcall FUN_004b4f9f(CDataExchange * param_1, uint param_2, uint param_3, uint param_4)
 * body: 004b4f9f-004b4fcc
 */

void FUN_004b4f9f(CDataExchange *param_1,uint param_2,uint param_3,uint param_4)

{
  if ((param_2 < param_3) || (param_4 < param_2)) {
    FailMinMaxWithFormat(param_1,param_3,param_4,"%lu",0xf112);
  }
  return;
}


