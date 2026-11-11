
/* ==== FUN_004a505c @ 004a505c ==== 
 * signature: undefined FUN_004a505c(void)
 * body: 004a505c-004a5087
 */

CArchive * FUN_004a505c(CArchive *param_1,undefined4 param_2)

{
  CArchive *pCVar1;
  
  pCVar1 = param_1 + 0x24;
  if (*(uint *)(param_1 + 0x28) < *(int *)pCVar1 + 4U) {
    CArchive::Flush(param_1);
  }
  **(undefined4 **)pCVar1 = param_2;
  *(int *)pCVar1 = *(int *)pCVar1 + 4;
  return param_1;
}


