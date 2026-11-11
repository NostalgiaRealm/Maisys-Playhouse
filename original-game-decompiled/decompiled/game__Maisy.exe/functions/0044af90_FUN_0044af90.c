
/* ==== FUN_0044af90 @ 0044af90 ==== 
 * signature: undefined4 __cdecl FUN_0044af90(char param_1, undefined4 param_2)
 * body: 0044af90-0044afc7
 */

undefined4 __cdecl FUN_0044af90(char param_1,undefined4 param_2)

{
  undefined4 local_8;
  
  if (param_1 == '\0') {
    return param_2;
  }
  local_8 = CONCAT22(CONCAT11((char)param_2,(char)((uint)param_2 >> 8)),
                     CONCAT11((char)((uint)param_2 >> 0x10),(char)((uint)param_2 >> 0x18)));
  return local_8;
}


