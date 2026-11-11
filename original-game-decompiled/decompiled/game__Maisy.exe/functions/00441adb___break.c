
/* ==== __break @ 00441adb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441adb-00441adb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


