
/* ==== FUN_00433ba0 @ 00433ba0 ==== 
 * signature: undefined4 __cdecl FUN_00433ba0(int * param_1, char * param_2)
 * body: 00433ba0-00433bb9
 */

undefined4 __cdecl FUN_00433ba0(int *param_1,char *param_2)

{
  *param_2 = '\x01' - (*(int *)(*param_1 + 0x2a) == 0);
  return 0;
}


