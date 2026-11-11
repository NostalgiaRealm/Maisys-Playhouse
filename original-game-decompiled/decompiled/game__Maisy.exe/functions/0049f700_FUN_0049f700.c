
/* ==== FUN_0049f700 @ 0049f700 ==== 
 * signature: int __cdecl FUN_0049f700(int param_1, FILE * param_2)
 * body: 0049f700-0049f72c
 */

int __cdecl FUN_0049f700(int param_1,FILE *param_2)

{
  int iVar1;
  
  FID_conflict___lock_file(param_2);
  iVar1 = FID_conflict__ungetc(param_1,param_2);
  FID_conflict___lock_file(param_2);
  return iVar1;
}


