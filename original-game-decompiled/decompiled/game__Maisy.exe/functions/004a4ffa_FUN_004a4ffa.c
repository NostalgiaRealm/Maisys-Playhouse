
/* ==== FUN_004a4ffa @ 004a4ffa ==== 
 * signature: CArchive * __stdcall FUN_004a4ffa(CArchive * param_1, undefined4 param_2)
 * body: 004a4ffa-004a5025
 */

CArchive * FUN_004a4ffa(CArchive *param_1,undefined4 param_2)

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


