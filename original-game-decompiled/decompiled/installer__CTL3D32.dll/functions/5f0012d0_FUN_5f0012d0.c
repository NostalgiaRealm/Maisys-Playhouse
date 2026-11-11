
/* ==== FUN_5f0012d0 @ 5f0012d0 ==== 
 * signature: undefined __stdcall FUN_5f0012d0(void)
 * body: 5f0012d0-5f0012f8
 */

void FUN_5f0012d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_5f005174;
  do {
    FUN_5f0012b0(puVar1);
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_5f005180);
  FUN_5f0012b0(&DAT_5f005180);
  return;
}


