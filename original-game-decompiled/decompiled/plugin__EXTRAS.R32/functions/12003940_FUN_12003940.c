
/* ==== FUN_12003940 @ 12003940 ==== 
 * signature: undefined4 __fastcall FUN_12003940(int param_1)
 * body: 12003940-12003957
 */

undefined4 __fastcall FUN_12003940(int param_1)

{
  if (*(char *)(param_1 + 100) != '\0') {
    return *(undefined4 *)(param_1 + 0x68);
  }
  if (*(char *)(param_1 + 0x1a) != '\0') {
    return *(undefined4 *)(param_1 + 0x2e);
  }
  return *(undefined4 *)(param_1 + 0x2a);
}


