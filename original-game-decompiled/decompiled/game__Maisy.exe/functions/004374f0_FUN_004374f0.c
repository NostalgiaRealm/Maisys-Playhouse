
/* ==== FUN_004374f0 @ 004374f0 ==== 
 * signature: undefined __cdecl FUN_004374f0(char * param_1, char * param_2)
 * body: 004374f0-0043751d
 */

void __cdecl FUN_004374f0(char *param_1,char *param_2)

{
  int iVar1;
  
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  iVar1 = 0x10;
  do {
    if (*param_1 == '\0') {
      return;
    }
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    iVar1 = iVar1 + -1;
  } while (0 < iVar1);
  return;
}


