
/* ==== FUN_0043d2f0 @ 0043d2f0 ==== 
 * signature: undefined __cdecl FUN_0043d2f0(short param_1, char * param_2)
 * body: 0043d2f0-0043d36a
 */

void __cdecl FUN_0043d2f0(short param_1,char *param_2)

{
  char local_104;
  char local_103;
  char local_102;
  
  if (99 < param_1) {
    param_2[1] = '\0';
    *param_2 = -0x37;
    return;
  }
  _sprintf(&local_104,&DAT_004db558,(int)param_1);
  if (9 < param_1) {
    *param_2 = local_104;
    param_2[1] = local_103;
    param_2[2] = local_102;
    return;
  }
  *param_2 = '0';
  param_2[2] = '\0';
  param_2[1] = local_104;
  return;
}


