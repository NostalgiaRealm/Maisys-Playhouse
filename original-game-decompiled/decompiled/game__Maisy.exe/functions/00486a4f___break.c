
/* ==== __break @ 00486a4f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486a4f-00486a4f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


