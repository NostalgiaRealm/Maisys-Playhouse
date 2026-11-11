
/* ==== FUN_00496d7b @ 00496d7b ==== 
 * signature: float10 __fastcall FUN_00496d7b(undefined4 param_1)
 * body: 00496d7b-00496d8b
 */

float10 __fastcall FUN_00496d7b(undefined4 param_1)

{
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  float10 fVar1;
  
  fVar1 = (float10)fpatan(in_ST1,in_ST0);
  if ((char)param_1 != '\0') {
    fVar1 = (float10)3.141592653589793 - fVar1;
  }
  if ((char)((uint)param_1 >> 8) != '\0') {
    fVar1 = -fVar1;
  }
  return fVar1;
}


