
/* ==== FUN_004b4fcd @ 004b4fcd ==== 
 * signature: undefined __stdcall FUN_004b4fcd(CDataExchange * param_1, uint param_2, uint param_3, uint param_4)
 * body: 004b4fcd-004b4ffa
 */

void FUN_004b4fcd(CDataExchange *param_1,uint param_2,uint param_3,uint param_4)

{
  if ((param_2 < param_3) || (param_4 < param_2)) {
    FailMinMaxWithFormat(param_1,param_3,param_4,"%lu",0xf112);
  }
  return;
}


