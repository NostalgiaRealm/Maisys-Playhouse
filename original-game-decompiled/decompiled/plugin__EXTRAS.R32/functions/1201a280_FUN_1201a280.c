
/* ==== FUN_1201a280 @ 1201a280 ==== 
 * signature: undefined FUN_1201a280(void)
 * body: 1201a280-1201a29b
 */

byte FUN_1201a280(HFILE param_1,LONG param_2)

{
  LONG LVar1;
  
  LVar1 = _llseek(param_1,param_2,1);
  return -(LVar1 == -1) & 2;
}


