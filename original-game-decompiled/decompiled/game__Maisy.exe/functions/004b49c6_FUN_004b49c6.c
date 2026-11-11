
/* ==== FUN_004b49c6 @ 004b49c6 ==== 
 * signature: undefined __stdcall FUN_004b49c6(CDataExchange * param_1, int param_2, short * param_3)
 * body: 004b49c6-004b49f6
 */

void FUN_004b49c6(CDataExchange *param_1,int param_2,short *param_3)

{
  if (*(int *)param_1 == 0) {
    param_3 = (short *)(int)*param_3;
  }
  DDX_TextWithFormat(param_1,param_2,&DAT_004db558,0xf110,param_3);
  return;
}


