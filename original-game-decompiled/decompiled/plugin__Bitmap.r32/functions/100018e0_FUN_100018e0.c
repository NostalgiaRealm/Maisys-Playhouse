
/* ==== FUN_100018e0 @ 100018e0 ==== 
 * signature: undefined4 __cdecl FUN_100018e0(int param_1, int param_2, int param_3)
 * body: 100018e0-10001913
 */

undefined4 __cdecl FUN_100018e0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_100071d0(param_2,param_3);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10001920(param_1,puVar1);
    FUN_10006570(puVar1);
  }
  return 0;
}


