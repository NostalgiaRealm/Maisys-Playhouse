
/* ==== FUN_10014d70 @ 10014d70 ==== 
 * signature: undefined __stdcall FUN_10014d70(void)
 * body: 10014d70-10014dac
 */

void FUN_10014d70(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *DAT_10023920;
  DAT_10023920 = DAT_10023920 + (byte)(&DAT_1001f128)[cVar1];
  for (iVar2 = (uint)(byte)(&DAT_1001f148)[cVar1] * DAT_10024020 +
               (uint)(byte)(&DAT_1001f138)[cVar1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_10014dad();
  }
  return;
}


