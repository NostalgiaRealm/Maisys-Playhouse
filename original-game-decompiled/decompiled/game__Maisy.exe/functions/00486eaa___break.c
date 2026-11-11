
/* ==== __break @ 00486eaa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486eaa-00486eaa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


