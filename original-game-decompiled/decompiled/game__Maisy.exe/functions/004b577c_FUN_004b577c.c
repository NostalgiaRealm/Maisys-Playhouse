
/* ==== FUN_004b577c @ 004b577c ==== 
 * signature: undefined4 __fastcall FUN_004b577c(int param_1)
 * body: 004b577c-004b57ae
 */

undefined4 __fastcall FUN_004b577c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *local_8;
  
  local_8 = *(undefined4 **)(param_1 + 8);
  do {
    if (local_8 == (undefined4 *)0x0) {
      return 1;
    }
    puVar1 = (undefined4 *)*local_8;
    iVar2 = (**(code **)(*(int *)local_8[2] + 0x7c))();
    local_8 = puVar1;
  } while (iVar2 != 0);
  return 0;
}


