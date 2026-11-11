
/* ==== FUN_1201a2a0 @ 1201a2a0 ==== 
 * signature: undefined FUN_1201a2a0(void)
 * body: 1201a2a0-1201a2cc
 */

LONG FUN_1201a2a0(HFILE param_1)

{
  LONG lOffset;
  LONG LVar1;
  
  lOffset = _llseek(param_1,0,1);
  LVar1 = _llseek(param_1,0,2);
  _llseek(param_1,lOffset,0);
  return LVar1;
}


