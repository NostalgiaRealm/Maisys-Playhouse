
/* ==== FUN_11025160 @ 11025160 ==== 
 * signature: undefined __cdecl FUN_11025160(undefined4 param_1, char * param_2, undefined1 * param_3)
 * body: 11025160-11025190
 */

void __cdecl FUN_11025160(undefined4 param_1,char *param_2,undefined1 *param_3)

{
  if (*param_2 == '(') {
    param_2 = param_2 + 1;
  }
  if ((((*param_2 == 't') && (param_2[1] == 'r')) && (param_2[2] == 'u')) && (param_2[3] == 'e')) {
    *param_3 = 1;
    return;
  }
  *param_3 = 0;
  return;
}


