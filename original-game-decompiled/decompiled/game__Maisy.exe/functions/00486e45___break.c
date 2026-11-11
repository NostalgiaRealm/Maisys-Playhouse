
/* ==== __break @ 00486e45 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486e45-00486e45
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


