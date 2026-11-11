
/* ==== __break @ 0040af0a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040af0a-0040af0a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


