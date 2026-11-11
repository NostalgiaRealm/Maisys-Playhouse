
/* ==== __break @ 00442b25 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442b25-00442b25
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


