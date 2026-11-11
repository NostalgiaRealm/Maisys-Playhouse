
/* ==== FUN_00413910 @ 00413910 ==== 
 * signature: char __fastcall FUN_00413910(int param_1)
 * body: 00413910-0041391e
 */

char __fastcall FUN_00413910(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x12) != 0) {
    cVar1 = FUN_00413fc0(*(int *)(param_1 + 0x12));
    return cVar1;
  }
  return '\0';
}


