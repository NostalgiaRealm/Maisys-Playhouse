
/* ==== FUN_0044ae60 @ 0044ae60 ==== 
 * signature: uint __cdecl FUN_0044ae60(char param_1, uint param_2)
 * body: 0044ae60-0044ae97
 */

uint __cdecl FUN_0044ae60(char param_1,uint param_2)

{
  if (param_1 != '\0') {
    return (param_2 & 0xff00 | param_2 << 0x10) << 8 | (param_2 & 0xff0000) >> 8 | param_2 >> 0x18;
  }
  return param_2;
}


