
/* ==== FUN_00437430 @ 00437430 ==== 
 * signature: bool __cdecl FUN_00437430(int * param_1, int * param_2)
 * body: 00437430-0043746a
 */

bool __cdecl FUN_00437430(int *param_1,int *param_2)

{
  if (*param_2 != *param_1) {
    return false;
  }
  if (param_2[1] != param_1[1]) {
    return false;
  }
  if (param_2[2] != param_1[2]) {
    return false;
  }
  return param_2[3] == param_1[3];
}


