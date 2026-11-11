
/* ==== __break @ 00442c2b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442c2b-00442c2b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


