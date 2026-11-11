
/* ==== FUN_004b4a26 @ 004b4a26 ==== 
 * signature: undefined __stdcall FUN_004b4a26(CDataExchange * param_1, int param_2, undefined4 * param_3)
 * body: 004b4a26-004b4a36
 */

void FUN_004b4a26(CDataExchange *param_1,int param_2,undefined4 *param_3)

{
  if (*(int *)param_1 == 0) {
    param_3 = (undefined4 *)*param_3;
  }
  DDX_TextWithFormat(param_1,param_2,"%u",0xf117,param_3);
  return;
}


