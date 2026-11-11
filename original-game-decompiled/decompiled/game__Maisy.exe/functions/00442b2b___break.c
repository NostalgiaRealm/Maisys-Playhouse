
/* ==== __break @ 00442b2b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442b2b-00442b2b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


