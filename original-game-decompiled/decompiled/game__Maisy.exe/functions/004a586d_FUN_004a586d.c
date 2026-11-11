
/* ==== FUN_004a586d @ 004a586d ==== 
 * signature: undefined __stdcall FUN_004a586d(undefined4 * param_1, int param_2, int param_3)
 * body: 004a586d-004a589c
 */

void FUN_004a586d(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004a5fed(param_2 * param_3 + 0xc);
  *puVar1 = *param_1;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  *param_1 = puVar1;
  return;
}


