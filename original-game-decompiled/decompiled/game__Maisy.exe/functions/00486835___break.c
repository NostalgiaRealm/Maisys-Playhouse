
/* ==== __break @ 00486835 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486835-00486835
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


