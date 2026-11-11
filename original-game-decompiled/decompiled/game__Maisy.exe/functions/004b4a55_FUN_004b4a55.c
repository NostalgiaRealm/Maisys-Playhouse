
/* ==== FUN_004b4a55 @ 004b4a55 ==== 
 * signature: undefined __stdcall FUN_004b4a55(CDataExchange * param_1, int param_2, undefined4 * param_3)
 * body: 004b4a55-004b4a65
 */

void FUN_004b4a55(CDataExchange *param_1,int param_2,undefined4 *param_3)

{
  if (*(int *)param_1 == 0) {
    param_3 = (undefined4 *)*param_3;
  }
  DDX_TextWithFormat(param_1,param_2,&DAT_004db52c,0xf110,param_3);
  return;
}


