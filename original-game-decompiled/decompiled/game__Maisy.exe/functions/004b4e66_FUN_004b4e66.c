
/* ==== FUN_004b4e66 @ 004b4e66 ==== 
 * signature: undefined __stdcall FUN_004b4e66(CDataExchange * param_1, byte param_2, byte param_3, byte param_4)
 * body: 004b4e66-004b4e9a
 */

void FUN_004b4e66(CDataExchange *param_1,byte param_2,byte param_3,byte param_4)

{
  if ((param_2 < param_3) || (param_4 < param_2)) {
    FailMinMaxWithFormat(param_1,(uint)param_3,(uint)param_4,"%u",0xf112);
  }
  return;
}


