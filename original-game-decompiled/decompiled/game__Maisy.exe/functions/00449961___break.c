
/* ==== __break @ 00449961 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00449961-00449961
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


