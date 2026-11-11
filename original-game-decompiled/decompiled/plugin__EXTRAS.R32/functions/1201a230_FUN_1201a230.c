
/* ==== FUN_1201a230 @ 1201a230 ==== 
 * signature: byte __cdecl FUN_1201a230(LPCSTR param_1, HFILE * param_2)
 * body: 1201a230-1201a24c
 */

byte __cdecl FUN_1201a230(LPCSTR param_1,HFILE *param_2)

{
  HFILE HVar1;
  
  HVar1 = _lopen(param_1,0);
  *param_2 = HVar1;
  return -(HVar1 == -1) & 2;
}


