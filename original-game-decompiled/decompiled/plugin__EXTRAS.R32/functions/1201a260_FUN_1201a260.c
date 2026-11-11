
/* ==== FUN_1201a260 @ 1201a260 ==== 
 * signature: undefined FUN_1201a260(void)
 * body: 1201a260-1201a27e
 */

byte FUN_1201a260(HFILE param_1,UINT param_2,LPVOID param_3)

{
  UINT UVar1;
  
  UVar1 = _lread(param_1,param_3,param_2);
  return -(UVar1 == 0xffffffff) & 2;
}


