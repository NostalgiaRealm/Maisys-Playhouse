
/* ==== FUN_004b49f7 @ 004b49f7 ==== 
 * signature: undefined __stdcall FUN_004b49f7(CDataExchange * param_1, int param_2, undefined4 * param_3)
 * body: 004b49f7-004b4a07
 */

void FUN_004b49f7(CDataExchange *param_1,int param_2,undefined4 *param_3)

{
  if (*(int *)param_1 == 0) {
    param_3 = (undefined4 *)*param_3;
  }
  DDX_TextWithFormat(param_1,param_2,&DAT_004db558,0xf110,param_3);
  return;
}


