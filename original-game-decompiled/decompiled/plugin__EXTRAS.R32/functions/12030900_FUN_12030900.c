
/* ==== FUN_12030900 @ 12030900 ==== 
 * signature: int __cdecl FUN_12030900(FILE * param_1)
 * body: 12030900-12030938
 */

int __cdecl FUN_12030900(FILE *param_1)

{
  int iVar1;
  
  if (param_1 == (FILE *)0x0) {
    iVar1 = flsall(0);
    return iVar1;
  }
  FID_conflict___lock_file(param_1);
  iVar1 = __fflush_lk(param_1);
  FID_conflict___lock_file(param_1);
  return iVar1;
}


