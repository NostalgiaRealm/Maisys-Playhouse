
/* ==== FUN_004b4a84 @ 004b4a84 ==== 
 * signature: undefined __stdcall FUN_004b4a84(CDataExchange * param_1, int param_2, undefined4 * param_3)
 * body: 004b4a84-004b4a94
 */

void FUN_004b4a84(CDataExchange *param_1,int param_2,undefined4 *param_3)

{
  if (*(int *)param_1 == 0) {
    param_3 = (undefined4 *)*param_3;
  }
  DDX_TextWithFormat(param_1,param_2,"%lu",0xf117,param_3);
  return;
}


