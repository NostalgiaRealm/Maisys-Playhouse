
/* ==== FUN_10008610 @ 10008610 ==== 
 * signature: undefined __cdecl FUN_10008610(int param_1, int param_2)
 * body: 10008610-1000868f
 */

void __cdecl FUN_10008610(int param_1,int param_2)

{
  bool bVar1;
  undefined4 local_c;
  
  bVar1 = false;
  for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
    if (bVar1) {
      *(undefined1 *)(local_c + param_1) = 0;
    }
    else {
      *(undefined1 *)(local_c + param_1) = *(undefined1 *)(local_c + param_2);
      if (*(char *)(local_c + 1 + param_2) == '\0') {
        bVar1 = true;
      }
    }
  }
  return;
}


