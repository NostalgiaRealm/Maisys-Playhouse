
/* ==== __break @ 00442b34 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442b34-00442b34
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


